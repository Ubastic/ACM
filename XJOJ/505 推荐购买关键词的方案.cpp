/*
��N���ؼ�����ѡ��ĳ������ʹ���ֵ�ܺ;����ܴ��Ҳ�����B

�����������ö��������ϼ���
Ҳ�����ö�̬�滮�������Ҳ���

�ؼ��ʣ�DFS 
*/
#include<iostream>
using namespace std;

int total;
int cost[20];
int MAX;
int N,B;

void DFS(int sum,int present)
{
    if(sum>total)return;
    else MAX=max(MAX,sum);
    
    for(int i=present;i<N;i++)
        DFS(sum+cost[i],i+1);
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int T;
    cin>>T;
    while(T--)
    {
        cin>>N>>B;
        
        total=0;
        MAX=0;
        for(int i=0;i<N;i++)
        {
            cin>>cost[i];
            total+=cost[i];
        }
        total=total-B;
        DFS(0,0);
        cout<<total-MAX<<endl;
    }
    
    
    //while(1);
}
