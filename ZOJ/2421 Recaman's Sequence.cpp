/*
Recaman's Sequence���ж���a(0)=0,a(n)=a(n-1)-n����a(n)������������ǰ���ֹ�����a(n)=a(n-1)+n
����0<=k<=500000�����a(k)

��һ��������¸����е�ǰ500000��
��һ�������������ж�ĳһ����ǰ�Ƿ���ֹ�

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int data[500001];
bool judge[5000000]={false};

int main()
{
    int k;
    
    data[0]=0;
    for(int i=1;i<=500000;i++)
    {
        data[i]=data[i-1]-i;
        if(data[i]<=0||judge[data[i]]==true)data[i]=data[i-1]+i;
        judge[data[i]]=true;
    }
    
    while(cin>>k)
    {
        if(k==-1)return 0;
        
        cout<<data[k]<<endl;
    }
} 
