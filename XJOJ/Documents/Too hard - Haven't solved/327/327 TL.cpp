/*
����󣬿�ԭ��

һά��̬�滮����
time[i]�����i�ĵ���ĳ���ʱ�䣬���������ѱ�֤time[i]������
mice[i][2]��ʾ��i������ĳ�������
robot[i]��ʾ���򵽵�i������ʱ�������˼�������
״̬ת�Ʒ��̣�
����robot[i]��ǰ�ĵ������mice[i-t]��time[i]-time[i-t]ʱ���ڿ����ߵ�mice[i]
��ô�ҳ�����robot[i-t]��ֵ
robot[i]=robot[i-t]+1

�ؼ��ʣ�һά��̬�滮 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int mice[10000][2];
    int time[10000];
    int robot[10000]={0};
    
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d %d %d",time+i,mice[i],mice[i]+1);
        
    for(int i=0;i<m;i++)
    {
        int max=0;
        for(int j=0;j<i;j++)
            if(time[i]-time[j]>=abs(mice[i][0]-mice[j][0])+abs(mice[i][1]-mice[j][1]))
                if(max<robot[j])max=robot[j];
        robot[i]=max+1;
    }
    
    int max=0;
    for(int i=0;i<m;i++)
        if(max<robot[i])max=robot[i];
        
    printf("%d",max);
    
    //while(1);
}
