/*
�������������ĺ�����������������ǰ

�����������ж�һ�ºͱȲ�С��������Լ�������������� 

�ؼ��ʣ����⣬��ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int s,d;
        cin>>s>>d;
        if(s<d){cout<<"impossible"<<endl;continue;}
        if((s+d)%2!=0 || (s-d)%2!=0){cout<<"impossible"<<endl;continue;}
        
        int a=(s+d)/2;
        int b=(s-d)/2;
        
        cout<<a<<' '<<b<<endl; 
    }
} 
