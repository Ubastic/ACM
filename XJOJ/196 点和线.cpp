/*
����һ�ѵ㣬���ж����ַ������߶ΰ������������γɻ�·�����һ�������

���������������������������ϣ���Ϊ�ǻ�·�����԰����̶��ɵ�һ����Ϳ�����
��ξ����ж����ڵĻ�·�߶����߶���û�н���
����������֪ʶ������ĳ�Ҫ���������ǻ����Խ���ٶ��ѡ��߶����߶ν��桱��
��������Զ�����Ϊ��·���㿪ʼ����������
ע������жϽ����õĳ˷�������int��˾ͳ���Χ�ˣ�����Ҫ��long long

�ؼ��ʣ����㼸�Σ������������ 
*/
#include<iostream>
#define MAX 10
using namespace std;

struct Point
{
    long long x,y;
    Point(int a=0,int b=0):x(a),y(b){}
    Point operator -(const Point& p){return Point(x-p.x,y-p.y);}
    int operator *(const Point& p)
    {
        long long t=x*p.y-y*p.x;
        if(t>0)return 1;
        else if(t<0)return -1;
        else return 0;
    }
}point[MAX],path[MAX];

struct Line
{
    Point a,b;
    Line(Point p=Point(0,0),Point q=Point(0,0)):a(p),b(q){}
    bool Intersect(Line l)
    {
        if(((a-l.a)*(l.a-l.b))*((b-l.a)*(l.a-l.b))>=0)return false;
        if(((l.a-a)*(a-b))*((l.b-a)*(a-b))>=0)return false;
        return true;
    }
}line[MAX];

bool used[MAX]={0};
int n=0;
int total=0;

bool judge()
{
    line[n-1]=Line(path[n-1],path[0]);
        
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(line[j].Intersect(line[i])==true)return false;
    return true;
}

void search(int layer)
{
    if(layer==n && judge()==true)total++;

    for(int i=0;i<n;i++)
        if(used[i]==false)
        {
            used[i]=true;
            path[layer]=point[i];
            line[layer-1]=Line(path[layer-1],path[layer]);
            search(layer+1);
            used[i]=false;
        }
}


int main()
{
    //freopen("aaa.txt","r",stdin);
    while(cin>>point[n].x>>point[n].y)n++;

    used[0]=true;
    path[0]=point[0];
    search(1);
    
    cout<<total/2;
    //while(1);
}
