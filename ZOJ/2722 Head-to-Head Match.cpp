/*
��̭����ÿ�������������̭һ�룬������Ϊ���������ѡһ����ֱ�ӽ��������������������̭��һ�����������

ȡ2�Ķ���������ȡ������

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long n;
    while(cin>>n)
    {
        if(n==0)return 0;
        cout<<ceil(log10((double)n)/log10(2.0))<<endl;
    }
}  
