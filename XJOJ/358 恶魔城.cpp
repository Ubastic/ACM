/*
һ����������Ȩ�������޻�ͼ�������һ��Ѫֵ��ÿ��һ��·Ѫֵ����2�ټ���·��Ȩ
�ڼ估��󶼲�����ѪֵΪ���������ʱ����СѪֵ

�������Ƶ�˼�룬���һ���ڵ��ѪֵΪ1
���Եõ���һ���ڵ��Ѫֵvalue=ceil((min_HP[i]-map[j][i])/2.0);
��СѪֵ������������һ����ƻ�����ֵ����С��һ��
Ȼ�����ã��棩�������������ƻص�һ��Ϳ�����

�ؼ��ʣ���̬�滮��ͼ�ۣ��������� 
*/
#include<iostream>
#include<cmath>
#define MAXN 10000000
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    int N;
    cin>>N;
    
    int map[100][100];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>map[i][j];
            
    bool used[100]={0};
    int min_HP[100];
    for(int i=0;i<N;i++)
        min_HP[i]=MAXN;
    min_HP[N-1]=1;
    
    int count=1;
    while(count<N)
    {
        for(int i=0;i<N;i++)if(used[i]==false)
        {
            for(int j=0;j<N;j++)
                if(map[i][j]!=0)goto end;
            
            for(int j=0;j<N;j++)
            {
                if(map[j][i]!=0)
                {
                    int value=ceil((min_HP[i]-map[j][i])/2.0);
                    min_HP[j]=min(min_HP[j],max(value,1));
                }
                map[j][i]=0;
            }
            used[i]=true;count++;
            end:;
        }
    }
    
    cout<<min_HP[0];
    //while(1);
}
