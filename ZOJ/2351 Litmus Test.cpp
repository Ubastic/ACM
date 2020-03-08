/*
��֪�������ȳ���Ka=[H+]*[acid ions]/[acid]
����[H+]����Һ��������Ũ�ȣ�[acid ions]����Һ���������Ũ�ȣ�[acid]��δ�������Ũ��
��֪�����������Ħ����nole��������ӵĽṹΪH(m)[acid ions](n)����pHֵ

�������x*mole�����ᣬ��[H+]=x*mole*m
[acid ions]=x*mole*n
[acid]=(1-x)*mole
��ΪKa=[H+]*[acid ions]/[acid] 
����Ka=x*mole*m*x*n/(1-x)����(m*n*mole)x^2+Ka*x-Ka=0
��˶�Ԫһ�η��̵ã�x=(sqrt(Ka^2+4*m*n*mole*Ka)-Ka)/(2*m*n*mole)
[H+]=(sqrt(Ka^2+4*m*n*mole*Ka)-Ka)/(2*n)
����ù�ʽpH=-log10[H+]���pHֵ
������Ѹ㶮��Ӣ����

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double Ka,mole;
        int m,n;
        while(cin>>Ka>>mole>>m>>n)
        {
            if(Ka==0 && mole==0 && m==0 && n==0)break;
            
            double H=(sqrt(Ka*Ka+4*m*n*mole*Ka)-Ka)/(2*n);
            double pH=-log10(H);
            printf("%.3f\n",pH);
        }
        if(t>0)cout<<endl;
    }
}

