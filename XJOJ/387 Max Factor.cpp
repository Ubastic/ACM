/*
�ҳ�һ�����о���������������Ǹ�

��һ��һ���ж�һ��һ���ң����ļ��������������
������������ĺ���Ҳ����д������ֽ���������࣬���������������Լ�

�ؼ��ʣ���ѧ�⣬���⣬���� 
*/
#include<iostream>
using namespace std;

int max_factor(int test)
{
    int x=test;
    
    for(int i=2;i*i<=x;i++)
        while(x%i==0)x/=i;
    
    return x;
}

int main()
{
    int n;
    cin>>n;
 
    int max=0,max_result;
    while(n--)
    {
        int t,s;
        cin>>t;
        
        s=max_factor(t);
        if(s>max){max=s;max_result=t;}
    }
    cout<<max_result;
    
    //while(1);
    return 0;
}
