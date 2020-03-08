/*
�������ÿ������ʾ�ݳ��ø߶ȣ�Ҫ��������Ϊ��Ŀ飬��Ϊ��Ŀ鲻������

�������ݣ�Ȼ��һ��һ�����жϣ�����flag��һ�������жϵ�һ������
��һ�������жϵڶ�������
Ϊ�˸�������ж�ĳһ����������ң�������ľ������һ�����ݲ�Ϊ��ı߿�
������̾ͱȽϺ�ʵ��

�ؼ��ʣ�����̫�򵥵ļ��� 
*/
#include<iostream>
using namespace std;

int main()
{
    int N,M;
    while(cin>>N>>M)
    {
        if(N==0 && M==0)break;
        
        int meadow[12][12];
        for(int i=0;i<12;i++)
            for(int j=0;j<12;j++)
                meadow[i][j]=1;
                
        for(int i=1;i<=N;i++)
            for(int j=1;j<=M;j++)
                cin>>meadow[i][j];
             
        bool zero=false;
        bool beautiful=true;
        for(int i=1;i<=N;i++)
            for(int j=1;j<=M;j++)
                if(meadow[i][j]==0)
                {
                    zero=true;
                    if(meadow[i-1][j]==0)beautiful=false;
                    if(meadow[i+1][j]==0)beautiful=false;
                    if(meadow[i][j-1]==0)beautiful=false;
                    if(meadow[i][j+1]==0)beautiful=false;
                }
        if(zero==true && beautiful==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
} 
