/*
��ԭ��

�Թ����⣬���Ƶ�XJOJ 302
ֻ��������Թ�����΢�鷳һЩ���������������ֱ��1.6�׵�Բ��ζ��·�Ŀ�ȱ��2��
���Զ�������ľ�������Ҫ����һЩת�����Ϳ��Ա����ͨ���Թ�ͼ��
ת������������岻����С���񣬶���ʮ�ֽ����

times[i][j][k]��ʾ������ߵ�[i][j]�������k����ʱ������ʱ��
��ֵ���еĶ�Ϊ���޴�ֻ������Լ�����Ϊ0
Ȼ�����ÿ��������ĵ㣬�����ֱ��x<=3������ת����ת״̬��ʱ��
��ԭ״̬ȡ��Сֵ
��󿴽������ֵ���� 

�ؼ��ʣ���̬�滮���Թ� 
*/
#include<iostream>  
using namespace std;  

int main()  
{  
    //freopen("aaa.txt","r",stdin);
    
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int m,n;
    cin>>m>>n;
    
    bool map[56][56];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>map[i][j];
    //����ԭ��ͼ 
    
    bool nmap[56][56];
    for(int i=1;i<=m-1;i++)  
        for(int j=1;j<=n-1;j++)
            nmap[i][j]=!(map[i][j] || map[i][j+1] || map[i+1][j] || map[i+1][j+1]);
    //�������µ�ͼ��1��ʾ���ߣ�0��ʾ������ 
    
    int start[2],end[2],direction;        
    cin>>start[0]>>start[1]>>end[0]>>end[1];
    char c;
    cin>>c;
    switch(c)
    {
        case'E':direction=0;break;
        case'S':direction=1;break;
        case'W':direction=2;break;
        case'N':direction=3;break;
    }
    
    int times[56][56][56];
    for(int i=0;i<m;i++)  
        for(int j=0;j<n;j++)  
            for(int k=0;k<4;k++)  
                times[i][j][k]=10000;  
    times[start[0]][start[1]][direction]=0;
    //��ʼ�� 

    bool flag=true;
    while(flag)  
    {  
        flag=false;
        for(int i=1;i<m;i++)  
            for(int j=1;j<n;j++)  
                for(int k=0;k<4;k++)  
                    if(nmap[i][j] && times[i][j][k]<10000)  
                    {  
                        for(int t=1;t<=3 && nmap[i+t*dx[k]][j+t*dy[k]];t++)
                            if(times[i+t*dx[k]][j+t*dy[k]][k]>times[i][j][k]+1)  
                            {  
                                times[i+t*dx[k]][j+t*dy[k]][k]=times[i][j][k]+1;  
                                flag=true;  
                            }//��1������2������3�� 
                        
                        if(times[i][j][(k+1)%4]>times[i][j][k]+1)  
                        {  
                            times[i][j][(k+1)%4]=times[i][j][k]+1;  
                            flag=true;  
                        }//��ת 
                        if(times[i][j][(k+3)%4]>times[i][j][k]+1)  
                        {  
                            times[i][j][(k+3)%4]=times[i][j][k]+1;  
                            flag=true;  
                        }//��ת 
                    }  
    }
    
    int mins=10000;
    for(int k=0;k<4;k++)
        if(mins>times[end[0]][end[1]][k])mins=times[end[0]][end[1]][k];
        
    if(mins==10000 || nmap[start[0]][start[1]]==0)cout<<"-1"<<endl;  
    else cout<<mins<<endl;  
        
    //while(1);
}
