/*
������в��ཻ�������Ӿ���ʹ���ֵ�˻���󡣾����ֵ�����ڲ�����Ԫ�صĺ� 

����ö�����еķָ��ߣ��Ѿ���ֳ����飬����ÿ�������Ӿ���
��������������ظ�������
������Ӿ����Ǳ������е�����ϣ��ٰ�������ֵ������������Ӷκ�
Ϊ�˱����ظ����㣬�����������������ϣ�Ȼ��浽һ���ָ�������
�������ֱ�ӱ���һ������Ϳ����ҵ��������ָ������ҳ˻����
��Ȼ��Ҫ�����зָ����ת�þ��������һ��
����Ҫ���ǵ������Ǹ���������������С�ĸ�ֵ���Ҳ���Եõ��ܴ������
���԰�ǰ��Ĺ��̸ĳ�ȡ��СҲ����һ��

�ؼ��ʣ���ά��̬�滮������Ӿ��� 
*/
#include<iostream>
#define INF_MIN -1000000
#define INF_MAX 1000000
using namespace std;

int matrix[100][100];

int max_DP(int array[],int start,int end)
{
    int max=INF_MIN;
    int b=INF_MIN;
    for(int i=start;i<end;i++)
    {
        if(b>0)b+=array[i];
        else b=array[i];
        if(b>max)max=b;
    }
    return max;
}//����Ӷκ� 

int min_DP(int array[],int start,int end)
{
    int min=INF_MAX;
    int b=INF_MAX;
    for(int i=start;i<end;i++)
    {
        if(b<0)b+=array[i];
        else b=array[i];
        if(b<min)min=b;
    }
    return min;
}//��С�Ӷκ� 

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
            
    long long max=INF_MIN;//���������ֵ 
    long long max_boundary[99][2];//���ֵ�ķָ��� 
    long long min_boundary[99][2];//��Сֵ�ķָ��� 
    
    for(int pppp=0;pppp<2;pppp++)
    {
        for(int i=0;i<99;i++)
            for(int j=0;j<2;j++)
            {
                max_boundary[i][j]=INF_MIN;
                min_boundary[i][j]=INF_MAX;
            }//�ָ��߳�ʼ�� 
            
        for(int i=0;i<n;i++)
        {
            int sum[100]={0};
            for(int ii=i;ii<n;ii++)
            {
                for(int j=0;j<m;j++)
                    sum[j]+=matrix[ii][j];//�������п��ܵ�����ϣ�sum�Ǽ�һ���ֵ 
                
                int a=max_DP(sum,0,m);
                int b=min_DP(sum,0,m);

                for(int k=ii;k<n-1;k++)
                {
                    if(max_boundary[k][0]<a)max_boundary[k][0]=a;
                    if(min_boundary[k][0]>b)min_boundary[k][0]=b;
                }
                for(int k=0;k<i;k++)
                {
                    if(max_boundary[k][1]<a)max_boundary[k][1]=a;
                    if(min_boundary[k][1]>b)min_boundary[k][1]=b;
                }//�浽�ָ����� 
            }
        }
        for(int k=0;k<n-1;k++)
        {
            if(max_boundary[k][0]!=INF_MIN && max_boundary[k][1]!=INF_MIN)
            {
                long long t=max_boundary[k][0]*max_boundary[k][1];
                if(t>max)max=t;
            }
            if(min_boundary[k][0]!=INF_MAX && min_boundary[k][1]!=INF_MAX)
            {
                long long t=min_boundary[k][0]*min_boundary[k][1];
                if(t>max)max=t;
            }
        }//�ҷָ��ߵ����ֵ 
        
        if(pppp==0)
        {
            for(int i=0;i<100;i++)
                for(int j=i+1;j<100;j++)
                    swap(matrix[i][j],matrix[j][i]);
            swap(m,n);
        }//����ת�ã��ٰ��зָ���һ�� 
    }
    cout<<max;
    //while(1);
}
