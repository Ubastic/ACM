/*
��n<=10��ԭ�ӣ�ÿ�����ϲ����ͷ��������Һ�����ʧ������һ�������ʾi,j�ϲ��ͷų�����������������Եõ�������

����λ�����ʾ״̬��0��ʾ���ڣ�1��ʾ��ʧ�ˣ�n��ԭ�ӵ�״̬����һ��int��ʾ
dp[i]Ϊ��ǰ״̬���������е�״̬i������ÿһ��״̬���������л����ڵ�����ԭ�����k,j
������ʧʱ�ų�������Ϊdp[i|(1<<j)]=max(dp[i|(1<<j)],dp[i]+map[k][j])
������һ������״̬�ҳ����ֵ���

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
using namespace std;

int main()  
{  
    int n;  
    while(cin>>n && n!=0)  
    {
        int map[10][10];  
        for(int i=0;i<n;i++)  
            for(int j=0;j<n;j++)  
                cin>>map[i][j];

        int dp[1<<10]={0};
        for(int i=0;i<(1<<n);i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    if((i&(1<<j))==0 && (i&(1<<k))==0 && j!=k)
                        dp[i|(1<<j)]=max(dp[i|(1<<j)],dp[i]+map[k][j]);

        int ans=0;  
        for(int i=0;i<(1<<n);i++)  
            ans=max(ans,dp[i]);
        cout<<ans<<endl;
    }
}
