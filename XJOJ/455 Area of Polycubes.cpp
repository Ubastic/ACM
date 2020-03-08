/*
��һ�����壬������һ��cube�Ļ�����һ��һ��ճ��ȥ�ģ�����������һ��������ǰ����������ĽӴ�
���������ı����

ֱ��ģ���������������ÿһ���λ��
���˵�һ�飬ÿһ�鶼Ӧ�����ٺ�ǰ���ĳһ������
�ж�������abs(point[j][0]-point[k][0])+abs(point[j][1]-point[k][1])+abs(point[j][2]-point[k][2])==1
����������ÿ����һ��������6
����ÿ��һ���Ӵ��棬�������2

ע�⣡����֪��ΪʲôҪ�ȶ������ݣ�Ȼ��sortһ�²��ܹ����������ĵúܣ�������û���������˼ 

�ؼ��ʣ����Σ�ģ�� 
*/
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct Point
{
     int x,y,z;
     int number;
     
     friend istream& operator >>(istream& input,Point& p)
     {
         scanf("%d,%d,%d",&p.x,&p.y,&p.z);
         return input;
     }
     bool operator <(const Point p)const
     {
         if(x==p.x && y==p.y) return z<p.z;
         else if(x==p.x) return y<p.y;
         return x<p.x;
     }
};

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int p;
        cin>>p;
        Point a[102];
        
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
            a[i].number=i+1;
        }
        sort(a,a+p);
        
        int surface=6*p;
        for(int i=1;i<p;i++)
        {
            bool flag=false;
            for(int j=0;j<i;++j)
                if(abs(a[i].x-a[j].x)+abs(a[i].y-a[j].y)+abs(a[i].z-a[j].z)==1)
                {
                    flag=true;
                    surface-=2;
                }
            if(flag==false)
            {
                cout<<t<<" NO "<<a[i].number<<endl;
                goto end;
            }
        }
        cout<<t<<" "<<surface<<endl;
        end:;
    }
    //while(1);
}
