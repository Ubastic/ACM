/*
��������εĸ��㣬�ж�һ�����Ƿ��ڶ������

���ַ�����һ���ǴӸõ���һ�����ߣ���������εļ�����
ż����˵�����ⲿ������˵�����ڲ�

��һ�ַ��������Ӷ���ε�һ��͸õ�
Ȼ����Ų����һ���㣬������ڲ�תһȦ��ɨ���ĽǶ�Ϊ360
���ⲿ��Ϊ0��
������õڶ��ַ������

�ؼ��ʣ����� 
*/
#include<iostream>
#include<cmath>
using namespace std;

struct Point
{
    double x,y;
};

double Angle(Point A,Point O,Point B)
{
    double a=sqrt((O.x-B.x)*(O.x-B.x)+(O.y-B.y)*(O.y-B.y));
    double b=sqrt((O.x-A.x)*(O.x-A.x)+(O.y-A.y)*(O.y-A.y));
    double o=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    double angle=acos((a*a+b*b-o*o)/(2*a*b));
    
    if((A.x-O.x)*(B.y-O.y)>(B.x-O.x)*(A.y-O.y))return angle;
    else return -angle;
}

int main()
{
    int T,n;
    Point point;
    cin>>T;
    
    while(T--)
    {
        cin>>n>>point.x>>point.y;
        
        Point start,p1,p2;
        double angle=0;
        cin>>start.x>>start.y;
        p1=start;
        for(int i=1;i<n;i++)
        {
            cin>>p2.x>>p2.y;
            angle+=Angle(p1,point,p2);
            p1=p2;
        }
        angle+=Angle(p1,point,start);

        if(fabs(angle)<1e-3)
            cout<<"No."<<endl;
        else cout<<"Yes!"<<endl;
    }
}
