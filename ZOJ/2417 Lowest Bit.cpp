/*
����A�����A�Ķ��������(10000)��ʽ��ֵ����26=11010�����10=2��88=1011000�����1000=8

�������˼�������Ϊ���A�����Ա�2�ļ��η�����
��ɸ��˼·��Ԥ����100���ڵĴ𰸣�ֱ�����

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int a;
    int data[101];
    
    for(int i=1;i<=100;i*=2)
        for(int j=i;j<=100;j+=i)data[j]=i;//���ĵ�ɸ�� 
    
    while(cin>>a)
    {
        if(a==0)return 0;
        cout<<data[a]<<endl;
    }
}
