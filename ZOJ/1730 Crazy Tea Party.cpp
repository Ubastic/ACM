/*
n������һȦ��ÿ�����������˻���λ�����ٶ��ٴο��԰����ε������ʼ�෴��

��һ�����ҹ��ɣ�ż���Գƻ����������Ȧ��

�ؼ��ʣ����㷨 
*/
#include<iostream>
using namespace std;

int main()
{
    int case_num;
    cin>>case_num;
    
    while(case_num--)
    {
        int n;
        cin>>n;
        int result=0;
        result=(n/2)*(n/2-1);
        if(n%2==1)result+=(n/2);
        cout<<result<<endl;
    }
    
    return 0;
}
