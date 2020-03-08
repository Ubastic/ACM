/*
����һ�������߳�����������������߾�Ϊ����������ֱ��������

�ȿ�����֪����һ��ֱ�Ǳߵ������������a
��a^2=c^2-b^2=(c+b)*(c-b)
����a^2��д��p*q,p<q
��c-b=p,c+b=q
����p(q)��ֵ�����Ϸ�������������ʱ���

�ٿ�����б�ߵ����
ֱ�ӱ���һ��ֱ�Ǳߣ���ʣ�µ��ǲ�����ȫƽ�����Ϳ�����
�������ܴ��õ�long long����ҪС��
�������0.5��ȡ�����������룩

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,a,b;
    double t;
    int solution=0;
    cin>>n;
    
    for(int i=1;i<n;i++)
    {
        if((n*n)%i==0)
        {
            if((n*n/i+i)%2==0 && (n*n/i-i)%2==0)
            {
                cout<<(n*n/i+i)/2<<','<<(n*n/i-i)/2<<endl;
                solution++;
            }
        }
    }
    
    for(int i=n-1;i>n/sqrt(2);i--)
    {
        b=sqrt(n+i)*sqrt(n-i)+0.5;
        if((n+i)*(n-i)==b*b)
        {
            cout<<i<<','<<b<<endl;
            solution++;
        }
    }
    
    if(solution==0)cout<<0<<endl;
    
    //while(1);
}
