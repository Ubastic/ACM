/*
��֪���ӵ�ֱ����ת��Ȧ����ʱ�䣬���ߵ�·�̺�ƽ���ٶ�

�򵥵�ģ���⣬���е�λת�� 

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

const double PI=3.1415927;

int main()
{
    int cases=0;
    double diameter,time;
    int revolution;
    while(cin>>diameter>>revolution>>time && revolution!=0)
    {
	    double distance=diameter*PI*revolution/12/5280;
	    double average_speed=distance/(time/3600);
	    printf("Trip #%d: %.2lf %.2lf\n",++cases,distance,average_speed);
	}
}
