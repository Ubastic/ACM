/*
��g������������ʹ��������C(n,n+f)

��g��ʼ����ö�٣�����������ֽ��������Ժ��ǲ���C(n,n+f)�ֽ����������Ӽ�
����20=2*2*5���Ϳ�C(n,n+f)�ǲ������ٺ�������2��һ��5
Ϊ�˼ӿ��ٶȣ���Ԥ�����100000���ڵ������������ֽ��б�
Ȼ���ڳ����ڲ�Ԥ�����C(n,n+f)�������g���ڵ����������ж��ٴ�
����ֱ���жϾͿ�����
��ô��C(n,n+f)�ж��ٸ�prime�����أ�
function��������n!�����ж��ٸ�prime�����ġ���΢��һ�¾Ϳ�����

�ؼ��ʣ����� 
*/
#include<iostream>
#include<map>
using namespace std;

int value[100001];
map<int,int> factor[100001];
int PRIME[10000];

int function(int n,int prime)
{
    int count=0;
    while(n)
    {
        count+=n/prime;
        n/=prime;
    }
    return count;
}//��n!�����ж��ٸ�prime���� 

void Init_value(int n,int f,int g)
{
    for(int i=0;PRIME[i]<=g;i++)
        value[PRIME[i]]=function(n+f,PRIME[i])-function(n,PRIME[i])-function(f,PRIME[i]);
}//Ԥ���� 

bool judge(int n,int f,int g)
{
    for(map<int,int>::iterator it=factor[g].begin();it!=factor[g].end();it++)
        if((*it).second>value[(*it).first])return false;
    return true;
}

void Init_prime(void)
{
    int n=0;
    PRIME[n++]=2;
    for(int i=3;n<10000;i+=2)
    {
        for(int j=0;PRIME[j]*PRIME[j]<=i;j++)
            if(i%PRIME[j]==0)goto end;
        PRIME[n++]=i;
        end:;
    }
}//��ʼ����ǰ10000������ 

void Init_factor()
{
    for(int i=0;PRIME[i]<100000;i++)
        for(long long j=PRIME[i];j<=100000;j*=PRIME[i])
            for(int k=j;k<=100000;k+=j)
                factor[k][PRIME[i]]++;
}//ɸ����100000���ڵ����ֽ������� 

int main()
{
    Init_prime();
    Init_factor();
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,g;
        cin>>n>>f>>g;
        
        Init_value(n,f,g);
        
        for(int i=g;i>0;i--)
            if(judge(n,f,i)==true)
            {
                cout<<i<<endl;
                break;
            }
    }
}
