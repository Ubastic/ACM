/*
����n�����Ȳ�ͬ�Ĺ��ӣ���������β�����û�п������һ��������

�������������ö�����з���
Ϊ���Ż��������еĹ��ӷֳ����飨��Ϊ�������������ߣ�
ÿһ���ڵĹ��Ӳ���������˳��ֻ�������
DFS�ĵ�һ����������ȷ�����ڵĹ���˳��ʼ��Ϊ���������Ͳ����ж���ķ���
�ڶ���������ʾĿǰ�������Ѿ��ж೤��
������������ʾĿǰƴ���ڼ�������
�չ������߾Ϳ��Գɹ�������

�ؼ��ʣ������������ 
*/ 
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

int M;
int stick[20];
bool used[20];
bool success;
int length;

void DFS(int p,int present,int part)
{
    if(part==3)success=true;
    if(success==true)return;
    
    for(int i=p;i<M;i++)
        if(used[i]==false && present+stick[i]<=length)
        {
            used[i]=true;
            if(present+stick[i]==length)DFS(0,0,part+1);
            else DFS(i+1,present+stick[i],part);
            used[i]=false;
        }
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int N;
    cin>>N;
    while(N--)
    {
        cin>>M;
        int sum=0;
        for(int i=0;i<M;i++)
        {
            cin>>stick[i];
            sum+=stick[i];
        }
        sort(stick,stick+M,greater<int>());//����������������֧���� 
        if(sum%4!=0){cout<<"no"<<endl;continue;}
        length=sum/4;
        
        success=false;
        memset(used,false,sizeof(used));
        DFS(0,0,0);
        
        if(success==true)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    //while(1);
}
