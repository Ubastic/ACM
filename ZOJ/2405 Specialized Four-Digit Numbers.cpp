/*
�ҳ�����ʮ���Ƶ���λ������������ʮ���ƣ�ʮ�����ƣ�ʮ������ʱ��λ֮����ȣ���˳�����

��һ����n�������λ�͵ĺ���
�ٱ�������ʮ������λ�����������������

�ؼ��ʣ�����ת�� 
*/ 
#include<iostream>
using namespace std;

int main()
{
    int add(int,int);
    int sum_10,sum_12,sum_16;
    int temp,a,b;
    
    for(int i=1000;i<10000;i++)
    {
        sum_10=add(i,10);
        sum_12=add(i,12);
        sum_16=add(i,16);
        
        if(sum_10==sum_12&&sum_12==sum_16)cout<<i<<endl;
    }
    
    return 0;
}

int add(int n,int base)
{   
    int sum=0; 
    for(;n>0;n/=base)
        sum+=n%base;
    return sum;
}
