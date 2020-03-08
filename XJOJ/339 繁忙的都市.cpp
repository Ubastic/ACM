/*
��Ŀ��֪����ʲô��˼�����������Ȩ����ͼ����С������������Ҫ�����ߵ�Ȩֵ����С 

Kruskal�㷨����С������
�õ����鼯��˼��~~

�ؼ��ʣ�̰�ģ���С�����������鼯 
*/
#include<iostream>
#include<algorithm>
using namespace std;

struct Edge
{
    int a,b,cost;
    void input(){cin>>a>>b>>cost;}
    bool operator <(const Edge &e)const{return cost<e.cost;}
};

int main()
{
    //freopen("aaa.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    
    int vertex[301];//����һ�����鼯 
    for(int i=1;i<=n;i++)
        vertex[i]=i;
        
    Edge edge[10000];
    for(int i=0;i<m;i++)
        edge[i].input();
    sort(edge,edge+m);
    
    int max_cost;
    for(int i=0;i<m;i++)
    {
        int u=edge[i].a,v=edge[i].b;
        if(vertex[u]!=vertex[v])
        {
            int small=min(vertex[u],vertex[v]);
            int large=max(vertex[v],vertex[u]);
            for(int j=1;j<=n;j++)
                if(vertex[j]==large)vertex[j]=small;
                else if(vertex[j]>large)vertex[j]--;
            max_cost=edge[i].cost;
        }
    }//���� 

    cout<<n-1<<' '<<max_cost<<endl;
    //while(1);
}
