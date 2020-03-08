/*
��ԭ��ͼ�ϣ���֪D��ҧ�������V����d 

V=��Բ�����-����Բ̨���-�м�СԲ�����
��Բ�����:pi*(D/2)^2*D
�м�СԲ�����: pi*(d/2)^2*d
Բ̨���=��׵��-С׵��
��׵��:(1/6)*��Բ�����
С׵��:(1/6)*�м�СԲ�����
V=pi/6*(D^3-d^3)
d=(D^3-6V/pi)^(1/3)

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#define PI 3.1415926535
using namespace std;

int main()
{
    double D,V,d;
    while(cin>>D>>V)
    {
        if(D==0 && V==0)break;
        
        d=pow((D*D*D-6*V/PI),1/3.0);
        cout.precision(3);
        cout<<fixed<<d<<endl;
    }
}
