/*
���n^n(n<1000000000)�ĵ�һλ��

��a=n^nȡ10�Ķ�����a=10^(n*log10(n))
ȡn*log10(n)��С������Ϊj����������Ϊk
a=10^(j+k)=10^k*10^j
��������λ����int(10^j)

�ؼ��ʣ���ѧ�⣬�ɷ���
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double j,k;
    long n;
    
    while(cin>>n)
    {
        j=n*log10(n);
        j-=int(j);
        k=pow10(j);
        cout<<int(k)<<endl;
    }
  
    return 0;
}