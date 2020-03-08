/*
�������г�ǰ��ֱ��(inch)��ת��Ȧ��������ʱ��(s)�����·��(mile)���ٶ�(MPH) 

��ת����λ���ټ���

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
#define PI 3.1415927
using namespace std;

int main()
{
    double diameter;
    int revolutions;
    double time;
    int N=1;
    while(cin>>diameter>>revolutions>>time)
    {
        if(revolutions==0)break;
        
        diameter/=12*5280;
        time/=3600;
        double distance=PI*diameter*revolutions;
        double MPH=distance/time;
        
        printf("Trip #%d: %.2f %.2f\n",N++,distance,MPH);
    }
}
