/*
����n<=100�������n��������ʾ����A��Ҫ���������B���㣺A��ÿ��Ԫ��B�ж��У�B�ϸ񵥵�����

������A���ţ�Ȼ��������ͬ������
ע�������ʽ

�ؼ��ʣ����� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[100];
    int n,t;
    
    while(cin>>n)
    {
        if(n==0)return 0;
        
        for(int i=0;i<n;i++)cin>>a[i];
        
        sort(a,a+n);
        
        cout<<a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])cout<<' '<<a[i];
        }
        cout<<endl; 
    }
} 
