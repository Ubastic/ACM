/*
����һ����ά������һ���Ӿ���ʹ��Ԫ���ܺ����

ö�����е�����ϣ���ÿһ����ϵ�����������ӣ����һά����
���ö�̬�滮�������Ӷκ�
���������е����ֵ

�ؼ��ʣ���̬�滮��ö�� 
*/
#include<iostream>   
using namespace std;

int main()
{
    int T;
	cin>>T;
	while(T--)
	{
        int n;
        cin>>n;

        int data[100][100]={0};	    
	    for(int i=0;i<n;i++)
		    for(int j=0;j<n;j++)
			    cin>>data[i][j];
	    
	    int MAX=-100000;
	    for(int i=0;i<n;i++)
		    for(int j=i;j<n;j++)
            {
                int sum[100]={0};
                for(int k=0;k<n;k++)
                    for(int t=i;t<=j;t++)
                        sum[k]+=data[t][k];
                
                int dp[100]={sum[0]};
			    for(int k=1;k<n;k++)
				    if(dp[k-1]>0)dp[k]=dp[k-1]+sum[k];
				    else dp[k]=sum[k];
			    
			    int maxn=-100000;
			    for(int k=0;k<n;k++)
			        maxn=max(maxn,dp[k]);
                
                MAX=max(MAX,maxn);
		    }
	    cout<<MAX<<endl;
	}
} 
