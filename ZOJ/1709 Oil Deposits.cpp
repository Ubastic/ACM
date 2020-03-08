/*
����һ�����Σ�����ĵ������'@'�������ͣ�'*'����û��
��þ��������ж��ٿ�������б������Ҳ������

дһ���ݹ�check��������ʾ�����͵�ĳһ��������ɢ��ֱ���Ѹÿ���ͨ����ȫ����Ϊ'*'
Ȼ������������������е㼴�ɣ�ÿ����һ��check�������൱���ҵ�һ����������

�ؼ��ʣ��ݹ飬���� 
*/
#include<iostream> 
using namespace std;

int m,n;
char grid[100][100];
int dir[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};//����߸���˳ʱ��תһȦ�İ˸����� 

void check(int x,int y) 
{
    grid[x][y]='*';
    for(int i=0;i<8;i++) 
    { 
        int s=x+dir[i][0];
        int t=y+dir[i][1];
        if(s<0||t<0||s>=m||t>=n)
            continue;
        if(grid[s][t]=='@')
        check(s,t);
    } 
}

int main() 
{ 
    while(cin>>m>>n) 
    {
        if(m==0 && n==0)break;
        
        int count=0;
        for(int i=0;i<m;i++) 
            for(int j=0;j<n;j++) 
                cin>>grid[i][j];
                
        for(int i=0;i<m;i++) 
            for(int j=0;j<n;j++) 
            {
                if(grid[i][j]=='@')
                { 
                    check(i,j);
                    count++;
                } 
            } 
        cout<<count<<endl;
    } 
}
