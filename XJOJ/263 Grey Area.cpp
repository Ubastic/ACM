/*
�㻭һ��ֱ��ͼ��Ҫ��īˮ 

ֱ��ģ��������򵥵���Ӣ�ﲻ�ÿ���

�ؼ��ʣ�ģ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,w;
    while(cin>>n>>w)
    {
        if(n==0 && w==0)break;
        
        int bar[11]={0};
        
        int width=0,height=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            bar[x/w]++;
            if(width<x)width=x;
            if(height<bar[x/w])height=bar[x/w];
        }
        width/=w;
            
        double ink=0;    
        for(int i=0;i<=width;i++)
            ink+=bar[i]*(width-i);
          
        cout<<ink/(height*width)+0.01<<endl;
    }
}
