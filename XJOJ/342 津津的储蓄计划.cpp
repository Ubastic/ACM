/*
��ԭ���

ģ�⣬����

�ؼ��ʣ����⣬ģ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int i,money=0,bank=0;
    
    for(int month=1;month<=12;month++)
    {
        money+=300;
        cin>>i;
        money-=i;
        if(money<0){cout<<-month;return 0;}
        bank+=money/100*100;
        money%=100;
    }
    cout<<money+bank/5*6;
    
    //while(1);
    return 0;
}
