/*
����ʱ�䣨ʱ���֣��룩�����ʱ��ͷ���ļн�

�ȸ���ʱ�����ʱ��ͷ���ľ��ԽǶȣ���Ϊ��ĵ�λ�洢
�������Ϊ��ԽǶ�
��󱣳ָýǶ���180�����ڣ��������180�ȣ���360�ȼ��������С����ȣ���360��
��Ҫ���ʽ���

�ؼ��ʣ�ϸ�ģ�����ת�� 
*/
#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    int hour,minute,second;
    int hour_degree;
    int minute_degree;
    int d,m,s;
    
    //freopen("aaa.txt","r",stdin);
    
    while(scanf("%d:%d:%d",&hour,&minute,&second)!=EOF)
    {
        if(hour>=12)hour-=12;
        hour_degree=hour*30*60*60;
        hour_degree+=minute*30*60;
        hour_degree+=second*30;

        minute_degree=minute*6*3600;
        minute_degree+=second*6*60;
        
        d=abs(hour_degree-minute_degree);
        if(d>180*60*60)d=360*60*60-d;
        
        s=d%60;
        d/=60;
        m=d%60;
        d/=60;
        cout<<d<<" ";
        if(m<10)cout<<"0"<<m<<" ";
        else cout<<m<<" ";
        if(s<10)cout<<"0"<<s<<endl;
        else cout<<s<<endl;
    }
    //while(1);
    return 0;
} 
