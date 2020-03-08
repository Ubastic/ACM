/*
����n,k������C(n,k)

C(n,k)=n!/[(n-k)!k!]���ӷ�ĸ����n�������
���ù�ʽ����ʱΪ�˲�ʹ���������ÿ��һ�����ӳ�һ����ĸ
������long long���͵Ļ�Ҳ������double 

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    long long n,k,result;
   
    //freopen("aaa.txt","r",stdin);
    
    
    while(cin>>n>>k)
    {
        if(n==0)return 0;
        if(n==k||k==0){cout<<1<<endl;continue;}
        if(k<n/2)k=n-k;
        
        result=n;
        for(int i=n-1;i>k;i--)
        {
            result*=i;
            result/=(n+1-i);
        }
        
        cout<<result<<endl;
    }
    
    
    return 0;
}

