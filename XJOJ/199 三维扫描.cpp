/*
��ԭ��

�����ZOJ 1709һģһ����ֻ���������ά����

�ؼ��ʣ��������ݹ� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int L,W,H;
int M;
int sth[50][50][50];

void search(int l,int w,int h)
{
    int now=sth[l][w][h];
    sth[l][w][h]=10000;//�����Ѿ�������κ�����������Ĳ����M 
    
    if(l-1>=0 && abs(now-sth[l-1][w][h])<=M)search(l-1,w,h);
    if(l+1<L && abs(now-sth[l+1][w][h])<=M)search(l+1,w,h);
    if(w-1>=0 && abs(now-sth[l][w-1][h])<=M)search(l,w-1,h);
    if(w+1<W && abs(now-sth[l][w+1][h])<=M)search(l,w+1,h);
    if(h-1>=0 && abs(now-sth[l][w][h-1])<=M)search(l,w,h-1);
    if(h+1<H && abs(now-sth[l][w][h+1])<=M)search(l,w,h+1);//��Χ�������� 
}

int main()
{
    cin>>L>>W>>H;
    cin>>M;
    
    for(int i=0;i<L;i++)
        for(int j=0;j<W;j++)
            for(int k=0;k<H;k++)
                cin>>sth[i][j][k];
          
    int count=0;
    for(int i=0;i<L;i++)
        for(int j=0;j<W;j++)
            for(int k=0;k<H;k++)
                if(sth[i][j][k]<256)
                {
                    search(i,j,k);
                    count++;
                }
                
    cout<<count;
    //while(1);
}
