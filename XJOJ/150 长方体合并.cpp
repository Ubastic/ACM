/*
������ά�ռ�����������Խǵ����꣬���������������ڿռ���ռ���

�����еĳ�������ཻ
ֱ�ӽ���һ����ά�������飬��ʾ�ÿռ�
�ٰ�������������ռλ�Ӵ���ȥ
��������ռ��ж��ٵ㱻ռ

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    bool judge[100][100][100]={0};
    int x1,y1,z1,x2,y2,z2;
    
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    if(x1>x2)swap(x1,x2);
    if(y1>y2)swap(y1,y2);
    if(z1>z2)swap(z1,z2);
    for(int i=x1;i<x2;i++)
        for(int j=y1;j<y2;j++)
            for(int k=z1;k<z2;k++)
                judge[i][j][k]=true;
                
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    if(x1>x2)swap(x1,x2);
    if(y1>y2)swap(y1,y2);
    if(z1>z2)swap(z1,z2);
    for(int i=x1;i<x2;i++)
        for(int j=y1;j<y2;j++)
            for(int k=z1;k<z2;k++)
                judge[i][j][k]=true;
                
    int count=0;
    for(int i=1;i<100;i++)
        for(int j=1;j<100;j++)
            for(int k=1;k<100;k++)
                if(judge[i][j][k]==true)count++;
    
    cout<<count;
    
    //while(1);
    return 0;    
}
