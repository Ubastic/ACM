/*
����section��������·�̺�ÿ��section��ʱ�䣬��ƽ��ÿ����೤ʱ��

������������
��ʽʲô�ģ���������

�ؼ��ʣ����⣬ģ�� 
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int sections;
    double distance;
    cin>>sections>>distance;
    
    int team;
    while(cin>>team)
    {
        bool flag=true;
        string time[20];
        
        int total=0;
        for(int i=0;i<sections;i++)
        {
            cin>>time[i];
            if(time[i]=="-:--:--")flag=false;
            else
            {
                int h,m,s;
                sscanf(time[i].c_str(),"%d:%d:%d",&h,&m,&s); 
                total+=h*3600+m*60+s;
            }
        }

        int avarage=round(total/distance);
        int m=avarage/60;
        int s=avarage%60;
        if(flag==true)
        {
            if(s<10)cout<<setw(3)<<team<<": "<<m<<":0"<<s<<" min/km"<<endl;
            else cout<<setw(3)<<team<<": "<<m<<":"<<s<<" min/km"<<endl;
        } 
        else cout<<setw(3)<<team<<": -"<<endl; 
    }
}

