/*
8*8�Ĺ��������̣�����������Ϣ����ʾ��Щ�����������ӣ���׸������м�������

�򵥣��ڱ������̵�ʱ���жϰ׸��ӵ������ǣ�����+����Ϊż���� 

�ؼ��ʣ����㷨 
*/ 
#include<iostream>
using namespace std;

int main()
{
    char a[8][9];
    int count=0;
    
    for(int i=0;i<8;i++)
        cin>>a[i];
    
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(a[i][j]=='F' && (i+j)%2==0)count++;
    
    cout<<count;
    
    //while(1);
    return 0;
}
