/*
��֤��°ͺղ��룬����ż��4<=n<32768������ж���������������

��ɸ�����������32768����Щ������
Ȼ��ö������������

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    bool prime[32768];
    short n;
    int count;
    
    memset(prime,true,sizeof(prime));
    
    for(int i=2;i<=181;i++)
        for(int k=i+i;k<32768;k+=i)
            prime[k]=false;
            
    while(cin>>n)
    {
        if(n==0)break;
        if(n==4){cout<<1<<endl;continue;}
        count=0;
        for(int i=3;i<=n/2;i+=2)
            if(prime[i]==true&&prime[n-i]==true)count++;
            
        cout<<count<<endl;
    }
    
    //while(1);
    return 0;
}
