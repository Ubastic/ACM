/*
����ʱ�䣬�����ָ�ʽ��������Ʊ�ʾ��

ֱ����

�ؼ��ʣ�����ת�������� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int time[3];
        scanf("%d:%d:%d",time,time+1,time+2);
        
        int binary[3][6]={0};
        for(int j=0;j<3;j++)
            for(int k=0;time[j]>0;k++)
            {
                binary[j][k]=time[j]%2;
                time[j]/=2;
            }
            
        cout<<i<<' ';
        for(int k=5;k>=0;k--)
            for(int j=0;j<3;j++)
                cout<<binary[j][k];
        cout<<' ';
        for(int j=0;j<3;j++)
            for(int k=5;k>=0;k--)
                cout<<binary[j][k];
        cout<<endl;
    }
}
