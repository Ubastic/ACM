/*
��֪һЩ���ӵ�������������������һ���γ�һ���µĳ�������Ϊ2*sqrt(m1*m2)����ȫ��������������

2*sqrt(2*sqrt(2*sqrt(m1*m2)*m3)*m4)չ�� 
=2*sqrt(2*sqrt(2))*m1^(1/8)*m2^(1/8)*m3^(1/4))*m4^(1/2)
����ǰ����ϵ�������Ե�m1��m4�ݼ�ʱ�����С 
�������ݣ������صĿ�ʼ��ϾͿ����� 

�ؼ��ʣ�̰�� 
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        double weight[100];
        for(int i=0;i<n;i++)
            cin>>weight[i];
        
        sort(weight,weight+n);
        reverse(weight,weight+n);
        for(int i=0;i<n-1;i++)
            weight[i+1]=2*sqrt(weight[i]*weight[i+1]);
        
        cout.precision(3);
        cout<<fixed<<weight[n-1]<<endl;
    }
} 
