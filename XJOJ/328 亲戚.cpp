/*
������������������ݹ�ϵ�����ݣ�Ȼ�����жϸ���ĳ�������Ƿ������ݹ�ϵ

�������鼯����
cin��cout�ᳬʱ

�ؼ��ʣ����鼯 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,m,p,a,b;
    cin>>n>>m>>p;
    
    int vertex[5001];
    for(int i=1;i<=n;i++)
        vertex[i]=i;//��ʼ�����鼯 
    
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        if(vertex[a]!=vertex[b])
        {
            int t=vertex[b];
            for(int i=1;i<=n;i++)
                if(vertex[i]==t)vertex[i]=vertex[a];
        }
    }//������Ϣ���� 
    
    for(int i=0;i<p;i++)
    {
        scanf("%d%d",&a,&b);
        if(vertex[a]==vertex[b])printf("Yes\n");
        else printf("No\n");
    }//��ѯ 
    //while(1);
} 
