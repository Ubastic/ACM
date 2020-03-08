/*
����ʵ��a>=1.1��������a^b==b^a��bֵ����b>a�����������λС������������b�����-1

�Ե�ʽȡ������b*ln(a)=a*ln(b)����ln(a)/a=ln(b)/b
��f(x)=ln(x)/x��x=eΪf(x)����ֵ������a�ķ�Χ��[1.1,e)
��Ϊf(44)<f(1.1)<f(43)������b�ķ�Χ��(e,44)
���ַ��Ϳ������b��ֵ
 
�ؼ��ʣ���ѧ�⣬���ַ� 
*/
#include<iostream>
#include<cmath>
#define E 2.7182818284590452354
using namespace std;

double f(double x)
{
    return log(x)/x;
}

int main()
{
    double a,b;
    double max,min;
    
    while(cin>>a)
    {
        if(a==0)break;
        if(a>=E){cout<<-1<<endl;continue;}
        
        min=E;max=44;
        
        do
        {
            b=(min+max)/2;
            if(f(b)>f(a))min=b;
                else max=b;
        }while(fabs(f(b)-f(a))>1e-14);
        
        printf("%.5f\n",b);
    }
    
    return 0;
}
