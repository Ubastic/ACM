/*
��֤��°ͺղ��룬���������������һ���

�ȴ��1000000�ڵ�������
Ȼ����Ҽ���
��cin�ᳬʱ 

�ؼ��ʣ����ۣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    bool prime[1000001];
    memset(prime,true,sizeof(prime));
    
    for(int i=2;i*i<=1000001;i++)
        for(int j=i*2;j<=1000000;j+=i)
            prime[j]=false;
    
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        
        for(int i=3;i<=n/2;i+=2)
            if(prime[i]==true && prime[n-i]==true)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
    }
} 
