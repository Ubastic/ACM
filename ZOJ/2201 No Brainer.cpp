/*
���������������ڶ���С�ڵ�һ�����"MMM BRAINS"�������"NO BRAINS"

������⡣������ʬ������

�ؼ��ʣ���������ϵ��⣬��ϲ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int case_num;
    cin>>case_num;
    
    while(case_num--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y)cout<<"MMM BRAINS"<<endl;
        else cout<<"NO BRAINS"<<endl;
    }
}
