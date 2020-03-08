/*
һ��������˯M���ӣ�����ÿ����������Ҫ������L���ӣ��������Ի�ö���֪ʶ��ÿ���ӵ�Ȩֵ��һ��

��̬�滮��dp[i][j]��ʾ������i����ʱ˯��j���ӣ���õ����֪ʶ
�����jeo���飡�� 

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
using namespace std;

int dp[1001][1001];
int jeo[1001];

int main()
{
    //freopen("aaa.txt","r",stdin);
    int N,M,L;
    while(cin>>N>>M>>L)
    {
        int A[1001];
        for(int i=1;i<=N;i++)
            cin>>A[i];
        
        int sum[1001]={0};
        for(int i=1;i<=N;i++)
            sum[i]=sum[i-1]+A[i];
            
        memset(jeo,0,sizeof(jeo));
        memset(dp,0,sizeof(dp));
        
        int ans=0;
        for(int i=1;i<=N;i++)
            for(int j=0;j<=M && j<=i;j++)
            {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
                if(i>=L && i-L>=j)
                jeo[j]=max(jeo[j]+A[i],dp[i-L][j]+sum[i]-sum[i-L]);
                dp[i][j]=max(dp[i][j],jeo[j]);
            }
        cout<<dp[N][M]<<endl;
    }
    //while(1);
}
