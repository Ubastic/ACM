/*
0-99��Ƶ���ĵ��ӻ�ң���������滵��һЩ�����������һ��Ƶ������һ��Ƶ������Ҫ��������

����һ��100���ڵ������ͼ�����ݰ����û�����Ϣ��ʼ�������ڵ���ڵ�֮���ʾ���·��
Ȼ����Floyd�㷨��������Ƶ����Ƶ��֮������·��

�ؼ��ʣ�ͼ�ۣ����·�� 
*/
#include<iostream>
#define INF 1000000000
using namespace std;

int main()
{
    int g[100][100];
    
    bool num[10],up,down,dash;
    cin>>num[1]>>num[2]>>num[3]>>up;
    cin>>num[4]>>num[5]>>num[6]>>down;
    cin>>num[7]>>num[8]>>num[9];
    cin>>dash>>num[0];
    
    int x,y;
    cin>>x>>y;
    
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++) 
            g[i][j]=INF;
    //��ʼ�� 
    for(int i=0;i<=9;i++)
        if(num[i]==true)
            for(int j=0;j<100;j++)g[j][i]=1;
    //һλ��Ƶ��
    if(dash==true)
        for(int i=0;i<=9;i++)
            for(int j=0;j<=9;j++)
                if(num[i]==true && num[j]==true)
                    for(int k=0;k<100;k++)g[k][i*10+j]=3;
    //��λ����Ƶ��
    if(up==true)
        for(int i=0;i<100;i++)g[i][(i+1)%100]=1;
    if(down==true)
        for(int i=0;i<100;i++)g[i][(i+99)%100]=1;
    //���¼�
    for(int i=0;i<100;i++)g[i][i]=0;
    //�Լ����Լ���·�� 
    for(int k=0;k<100;k++)
      for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
    //�����·�� 
    if(g[x][y]==INF)cout<<-1<<endl;
    else cout<<g[x][y]<<endl;
}
