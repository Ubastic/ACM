/*
��ͼ���ҽ��ӣ���������������ľ͵�ԭ·���أ�������Ҽ������� 

������ZOJ 1709���⣬ͬ���ķ���ȥ��
��������һ���������ǡ����塱

�ؼ��ʣ���ͼ���ݹ����� 
*/
#include<iostream>
using namespace std;

int w,h;
char map[50][50];
int gold=0;

void search(int row,int column)
{
    map[row][column]='#';
    
    if(map[row-1][column]=='T' || map[row+1][column]=='T' || map[row][column-1]=='T' || map[row][column+1]=='T')
        return;
        
    if(map[row-1][column]!='#')
    {
        if(map[row-1][column]=='G')gold++;
        search(row-1,column);
    }
    if(map[row+1][column]!='#')
    {
        if(map[row+1][column]=='G')gold++;
        search(row+1,column);
    }
    if(map[row][column-1]!='#')
    {
        if(map[row][column-1]=='G')gold++;
        search(row,column-1);
    }
    if(map[row][column+1]!='#')
    {
        if(map[row][column+1]=='G')gold++;
        search(row,column+1);
    }
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    cin>>w>>h;
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            cin>>map[i][j];
            
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            if(map[i][j]=='P')
                search(i,j);

    cout<<gold<<endl;
    
    //while(1);
} 
