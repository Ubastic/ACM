/*
��һ��������ʾ�ɲ�ͬ���������ĺͣ�Ҫ����������٣������ķ�ĸ�����ܵ�С

IDA*�㷨�����������������
���Ϊ���������ĸ�������1��ʼö�������Ƚ����������������ֱ��������н⣬��ʱ�ҵ�����ȵ����Ž�
�����漰������ˣ���int�����������ĳЩ�������ȷ
��long long�ټ���Լ�ֻ�������������Դ�������ݲ���double����Ȼ�Ƚ�Σ�յ���û�취
����Ϊ�˽�ʡʱ����ڴ澡����Ҫ��dfs��Ӳ���������ȫ�ֱ���
������ʱ��ӷ�ĸ��С�ķ�����ʼ����������ȷ������ȡֵ��Χ

�ؼ��ʣ����������������������������IDA 
*/
#include<iostream>
#include<cmath>
using namespace std;

int layer=0;
bool flag=false;
double a[10],b[10],best[10],result[10];

void dfs(int d)
{
    if(d==layer)
    {
        if(result[layer]<best[layer])
            memcpy(best,result,sizeof(best));
        flag=true;
        return;
    }
    
    int start=max(ceil(b[d]/a[d]),result[d]+1);//core 
    int end=(layer-d)*b[d]/a[d];//core 
    
    for(int i=start;i<=end;i++)
    {
        a[d+1]=a[d]*i-b[d];
        b[d+1]=b[d]*i;
        if(a[d+1]>=0)
        {
            result[d+1]=i;
            dfs(d+1);
        }
    }
}

int main()
{
    cin>>a[0]>>b[0];
    for(int i=0;i<10;i++)best[i]=1000000000;
    
    while(flag==false)
    {
        layer++;
        result[0]=0;
        dfs(0);
    }
            
    for(int i=1;i<layer;i++)
        cout<<int(best[i]+0.5)<<' ';
    cout<<int(best[layer]+0.5)<<endl;
}
