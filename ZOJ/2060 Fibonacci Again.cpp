/*
쳲�����������F(0)=7,F(1)=11��Ҫ��������������������ܷ�3����

7,11,18,29,47,76,123,199,322,521,843....
     yes         yes             yes
�ҹ��ɿ��Կ����ӵڶ��ʼÿ�������һ�����ı���

�ؼ��ʣ����㷨����ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    
    while(cin>>n)
    {
        if(n%4==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    
    return 0;
}
