/*
��֪Բ�İ뾶��ȼ�������Լ���������Ŀ�ĵصĽǶȣ����ܷ�����һ�Ρ�һ����5mile

ģ��ֱ����
ע��Ƕȴ���180�����
�Լ�double��int��ת��

�ؼ��ʣ����� 
*/
#include<iostream>
#include<string>
#define PI 3.14159
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="END")continue;
        if(s=="ENDOFINPUT")break;
        
        int r,fuel,angle;
        cin>>r>>fuel>>angle;
        
        if(angle>180)angle=360-angle;
        double need=2*(2*PI*r)*(angle/360.0)/5.0;
        
        if(fuel>=need)cout<<"YES "<<int(double(fuel)-need)<<endl;
        else cout<<"NO "<<5*fuel<<endl;
    }
}
