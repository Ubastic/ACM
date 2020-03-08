/*
��ԭ��ɣ���˼���Ѷ��������� 

��̬�滮��score[i]��ʾ��i��̨���ϵķ���
best[i][j]��ʾ��ǰ����̨��i����ǰ���˵Ĳ���j��
����״̬ת�Ʒ���best[i][j]=max(best[i-1][j-1],best[i-2][j-1],...,best[i-K][j-1])+score[i];
��˼����˵��һ��������������һ�����ߵ���best[i][j]
�����ߵ�best[N+1][M]

�ؼ��ʣ���ά��̬�滮 
*/
#include<iostream>
using namespace std;

int main()
{ 
    int N,M,K;
    int score[102]={0};
    
    cin>>N>>M>>K;
    for(int i=1;i<=N;i++) 
        cin>>score[i];
        
    long best[102][100];
    for(int i=0;i<=N+1;i++)
        for(int j=0;j<M;j++)
            best[i][j]=-1;
    best[0][0]=0;
    
    for(int i=1;i<=N+1;i++)
        for(int j=1;j<=min(i,M);j++)
        {
            int max=0;
            for(int step=1;step<=K;step++)
                if(i>=step && max<best[i-step][j-1])max=best[i-step][j-1];
            best[i][j]=max+score[i];
        }

    cout<<best[N+1][M];
    //while(1);
}
