/*
��n������ÿһ�����Լ��ĺ�ʱ��������ɵ�n�������������������ȫ���������Сʱ��

�ؼ�·�����⣬�����������������������k(k>1)��׼������ֻ����������1..k-1�С�
���Կ���ֱ���ö�̬�滮�����ƣ���
dp[i]��ʾ��i���������ʱ������ʱ��
����a,b,c�����i���Ⱦ�������ôdp[i]=max{dp[a],dp[b],dp[c]}+time[i]
����ʱ��Ϳ�����������

�ؼ��ʣ���̬�滮���ؼ�·�� 
*/ 
#include<iostream>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    int dp[10001];
    int n;
    cin>>n;
    
    int result=0;
    for(int i=1;i<=n;i++)
    {
        int time,need;
        cin>>time>>time;
        int max=0;
        while(cin>>need && need!=0)
            if(max<dp[need])max=dp[need];
        dp[i]=max+time;
        if(result<dp[i])result=dp[i];
    }
    
    cout<<result;
    //while(1);
}
