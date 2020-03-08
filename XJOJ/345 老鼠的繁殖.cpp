/*
�����ٺķ���ͨ���е�����ݵ㡣�����֮��ֻ��ֱ�ߣ�·�ϻ��ᴩ��ʯͷ

�Ƚ���һ����Ȩ����ͼ�����ü��㼸�η�����ͼ������֮��ĺķ�
Ȼ������Prim�㷨������С������

�ؼ��ʣ����㼸�Σ�ͼ�ۣ���С������ 
*/
#include<iostream> 
#include<cmath>
using namespace std; 

struct Point
{
    double x,y;
    Point(double a=0,double b=0):x(a),y(b){}
    Point operator -(Point p){return Point(x-p.x,y-p.y);}
};

double Distance(Point a,Point b)
{return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));}//��������

double Determinant(Point a,Point b)
{return a.x*b.y-b.x*a.y;}//������ʽ

double Inner_product(Point a,Point b)
{return a.x*b.x+a.y*b.y;}//�������ڻ� 

bool cross(Point a,Point b,Point rock,double r)
{
    if(fabs(Determinant(rock-a,rock-b))/Distance(a,b)>=r)return false;//ʯͷ��ֱ�ߵľ��� 
    if(Inner_product(rock-a,b-a)<=0)return false; 
    if(Inner_product(rock-b,a-b)<=0)return false;//�ж�Բ��ͶӰ�Ƿ����߶��� 
    return true;
}//�ж��߶��Ƿ񾭹���ʯ 

double MST(double map[][100],int n)
{
    bool used[100]={true};
    double min_cost;
    int node;
    
    double total_cost=0;
    for(int cnt=1;cnt<n;cnt++) 
    {   
        node=-1;
        for(int i=0;i<n;i++)if(used[i]==true)
            for(int j=0;j<n;j++)if(used[j]==false)
                if(node==-1||map[i][j]<min_cost)
                {
                    min_cost=map[i][j];
                    node=j;
                }
        used[node]=true;
        total_cost+=min_cost;
    }     
    return total_cost; 
}

int main() 
{
    int n,M;//����������ʯͷ������ 
    double r;//ʯͷ�İ뾶 
    Point cave[100];//�洢���ĵ�
    Point rock[100];//�洢ʯͷ�ĵ� 
    double map[100][100];//�洢����2������� 

    cin>>n>>M>>r;
    for(int i=0;i<n;i++)
        cin>>cave[i].x>>cave[i].y;
    for(int i=0;i<M;i++)
        cin>>rock[i].x>>rock[i].y;
        
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
        {
            double p=Distance(cave[i],cave[j]);
            for(int k=0;k<M;k++)
                if(cross(cave[i],cave[j],rock[k],r)==true)p+=1;
            map[j][i]=map[i][j]=p;
        }

    printf("%.2f",MST(map,n));
    //while(1);
} 
