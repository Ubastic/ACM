/*
��(0!+1!+2!+...+n!)%m��ֵ������0<=n<10^100��0<m<1000000

��n>=mʱ��n!%m=0�����Խ׳�����ֻȡ��min(n,m-1)�Ϳ�����
����ע��n<=1��m=1��������Ҫ��result%=m��仰

�ؼ��ʣ���ѧ�⣬�ַ��� 
*/
#include<iostream>
#include<string>
using namespace std;

int find_min(char n[],int m)
{
    int length_m=0;
    for(int i=1;i<=m;i*=10,length_m++);
    
    if(length_m<strlen(n))return m-1;
    else
    {
        int N=0;
        for(int i=0;i<strlen(n);i++)
        {
            N*=10;
            N+=n[i]-'0';
        }
        return min(N,m-1);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char n[102];
        int m;
        cin>>n>>m;
        
        int N=find_min(n,m);
        
        int result=1;
        long long f=1;
        for(int i=1;i<=N;i++)
        {
            f=(f*i)%m;
            result=(result+f)%m;
        }
        result%=m;//��n=0 or 1��m=1ʱ����������forѭ�������������õ� 
        cout<<result<<endl;
    }
} 
