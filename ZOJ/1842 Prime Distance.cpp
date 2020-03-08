/*
��������[L,U]<=1000000����������ھ��������һ�������;�����Զ��һ������
���ж���⣬�����С��

��ɸ������1000000���ڵ�������
�ٸ��������ҳ��������Զ�ļ���
��������鷳�ˣ�����ֱ�ӳ�ʼ����1000000�ڵ�������Ϳ����ˣ�
����������Ƕ�ÿ�ζ�������ݶ���ʼ����һ����Ӧ�������������鷳���������ø��� 

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

long long prime[5000];//4792=pi(sqrt(2^31))
bool sieve[1000000];

void getprime(long max)
{
    long n=0;
    prime[n++]=2;
    for(long i=3;i<=max;i+=2)
    {
        for(long j=0;prime[j]*prime[j]<=i;j++)
            if(i%prime[j]==0)goto end;
        prime[n++]=i;
        end:;
    }
}//�õ�ǰ4792�������� 

long long get_start(long long left,long long prime)
{
    long long j=(prime-left%prime)%prime;//�õ�j��������ʼλ��
    //while(j+left<prime*prime)j+=prime;//������ʼ��ʵֵ�������������Ϊ������ 
    if(j+left<prime*prime)return prime*prime-left;
    return j;
}

void init_sieve(long long left,long long right)
{
    memset(sieve,true,sizeof(sieve));//��ʼ��ɸ 
    
    if(left==1)sieve[0]=false;//��0��1��Ϊ������  
    
    for(long i=0;prime[i]*prime[i]<=right;i++)//Ҫɸ������ 
    {
        for(long j=get_start(left,prime[i]);j<=right-left;j+=prime[i])
            sieve[j]=false;//����prime[i]�ı��� 
    }
}

bool find(long long size,long long &min1,long long &min2,long long &max1,long long &max2)
{
    long long max=0,min=200000000;
    long long temp,i;
    bool flag=false;
    
    for(i=0;i<=size;i++)if(sieve[i]==true){temp=i++;break;}//�ҵ�ɸ�еĵ�һ������ 
    for(;i<=size;i++)
        if(sieve[i]==true)
        {
            if(i-temp<min){min=i-temp;min1=temp;min2=i;flag=true;}//�ҵ���С�ľ��� 
            if(i-temp>max){max=i-temp;max1=temp;max2=i;flag=true;}//�ҵ�����ľ���
            temp=i; 
        }
    
    return flag;
}

int main()
{
    getprime(47000);//46340=sqrt(2^31)

    long long l,u;
    while(cin>>l>>u)
    {
        init_sieve(l,u);//��l��u֮�������ɸ���� 

        long long min1,min2,max1,max2;
        if(find(u-l,min1,min2,max1,max2)==true)//�ҳ���С���ں�������� 
            cout<<min1+l<<","<<min2+l<<" are closest, "<<max1+l<<","<<max2+l<<" are most distant."<< endl;
        else cout<<"There are no adjacent primes."<<endl;
    }
    
    return 0;
}
