/*
������ά����ϵ�������ζ������꣬�������������Բ�����Բ���֮��

a,b,c�����������߳���pΪ�������ܳ���һ�룬s�������������r1���ڽ�Բ�뾶��r2�����Բ�뾶
p=(a+b+c)/2
s=sqrt(p*(p-a)*(p-b)*(p-c))
r1=2*s/(a+b+c)=s/p
r2=a*b*c/(4*s)

�ؼ��ʣ���ѧ��
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,y1,z1,x2,y2,z2,x3,y3,z3;
    double s,p,a,b,c,ratio,r1,r2;

    while(cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3)
    {
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
        b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
        c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));//�������߳�

        p=(a+b+c)/2;                       //�ܳ�һ��
        s=sqrt(p*(p-a)*(p-b)*(p-c));       //���������
        r1=s/p;                            //����Բ�뾶
        r2=a*b*c/(4.0*s);                  //���Բ�뾶
        ratio=r1/r2;                       //��Բ�뾶��
        ratio*=ratio;                      //��Բ�����
        
        printf("%.3f\n",ratio);
    }  

    return 0;
}
