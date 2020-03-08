/*
m*n�ĸ���ֽ��һ���׳�����½ǵ����Ͻ���ֱ�ߣ�Ҫ�����������ӣ�
�����֪��������������m,n���������

�׳澭���ĸ��ӽ���������һ����
����Ϊ���½Ǻ����Ͻ������������
��m,n���һ���������������ɵ�Ҳ���ڽ������
�������������k��õ�a,b���ʣ���ʱa*b��·��ֻ�����º�������������
�׳�����ߵ�����a�����ӣ��������ϴ�����b-1���ߣ���������a+b-1������
�ٳ������Լ��k���õ�����������Ϊm+n-gcd(m,n)

�ڶ����ǽ�m+n-gcd(m,n)=c�Ľ�������gcd(m,n)=k
k(a+b-1)=c��k|c
����a+b=x+1������xȡ��c��Լ��������1��c
����Ϊa��b���ʣ�����x+1��x+1������Լ�������ı�������ȡ������ab������

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a<b)return gcd(b,a);
    if(b==0)return 0;
    
    if(a%b==0)return b;
    else return gcd(b,a%b);
}//շת����������Լ�� 

int f(int x)
{
    bool judge[10005]={0};
    int count=0;
    
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
            for(int j=i;j<x;j+=i)
                judge[j]=1;

    for(int i=1;i<x;i++)
        if(judge[i]==0)count++;

    return count;
}

int main()
{
    long long n,m;
    int c;
    cin>>n>>m>>c;

    cout<<m+n-gcd(m,n)<<endl;//��һ��
    
    int result=0;
    for(int i=1;i<=c;i++)
        if(c%i==0)
            result+=f(i+1);

    cout<<result;
    
    //while(1);
    return 0;
}


