/*
һ��������һ��6�룬��һ��4�룬ͣһ��5�룬�������е������б�������ʱ

ģ�⣬ע�⿪ʼʱ������0��

�ؼ��ʣ����⣬ģ�� 
*/ 
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        int floor[101]={0};
        for(int i=1;i<=n;i++)
            cin>>floor[i];
            
        int time=0;
        for(int i=1;i<=n;i++)
        {
            if(floor[i]>floor[i-1])
                time+=6*(floor[i]-floor[i-1]);
            if(floor[i]<floor[i-1])
                time+=4*(floor[i-1]-floor[i]);
            time+=5;
        }
        cout<<time<<endl;
    }
}
