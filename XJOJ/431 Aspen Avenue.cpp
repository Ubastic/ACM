/*
·�������n<=2000��������֪λ�ã�����Ҫ��������·���ߣ���Ҫ�ɶԳ��֣����Ҽ��һ��
��������ҪŲ���ľ���

���û�м��һ����������Ϳ���̰���ˣ������ö�̬�滮
dp[i][j]��ʾ�ں���i�����������j��
�������Լ���ɣ����������淳

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

double dp[2001][2001];

double distance(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    int n,l,w;
    cin>>n>>l>>w;
    double base=l/double(n/2-1);
    
    double point[2001];
    for(int i=1;i<=n;i++)
        cin>>point[i];
    sort(point+1,point+1+n);
    
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        double x1=0,y1=point[i];
        double x2=0,y2=(i-1)*base;
        dp[i][i]=dp[i-1][i-1]+distance(x1,y1,x2,y2);
        x2=w,y2=(i-1)*base;
        dp[i][0]=dp[i-1][0]+distance(x1,y1,x2,y2);
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {//ע�⣬����ǵ�j���ܵ���i����Ϊ������i-j-1��Ȼ�ͱ��-1��
            double x1=0,y1=point[i];
            double x2=0,y2=(j-1)*base;
            double dist1=dp[i-1][j-1]+distance(x1,y1,x2,y2);
            x2=w;y2=(i-j-1)*base;
            double dist2=dp[i-1][j]+distance(x1,y1,x2,y2);
            dp[i][j]=min(dist1,dist2);
        }
    }
    cout.precision(10);
    cout<<fixed<<dp[n][n/2];
    
    //while(1);
}
