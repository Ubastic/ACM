/*
����ͼ����������м��ֲ��׷���

ö����ߵ�һ�����ף����ף�
���ݵ�һ��͵ڶ��е����ֿ���ȷ���ڶ����Դ����ƣ�����Ψһȷ��һ�ֲ��׷���
���Դ�ֻ������0����һ�����׻����׶�����������1����һ����������2�����ַ�����������

�ؼ��ʣ�ģ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    int number[10000];
    bool bomb[10000];
    
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>number[i];
        
    int count=0;
    
    for(int j=0;j<=1;j++)
    {
        bomb[0]=j;
        
        if(number[0]-bomb[0]>1 || number[0]-bomb[0]<0)continue;
        else bomb[1]=number[0]-bomb[0];//ǰ���� 
        
        for(int i=1;i<n-1;i++)
            if(number[i]-bomb[i]-bomb[i-1]>1 || number[i]-bomb[i]-bomb[i-1]<0)goto next;
            else bomb[i+1]=number[i]-bomb[i]-bomb[i-1];//�м� 
            
        if(number[n-1]!=bomb[n-2]+bomb[n-1])continue;//������ 
        
        count++;
        next:;
    }
    cout<<count;
    while(1);
}
