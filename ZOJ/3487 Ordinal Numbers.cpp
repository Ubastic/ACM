/*
����һ�������������������ʾ��ʽ

�仯���������У�ˮ��

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int T,n;
    cin>>T;
    while(cin>>n)
    {
        if((n/10)%10==1)cout<<n<<"th"<<endl;
        else if(n%10==1)cout<<n<<"st"<<endl;
        else if(n%10==2)cout<<n<<"nd"<<endl;
        else if(n%10==3)cout<<n<<"rd"<<endl;
        else cout<<n<<"th"<<endl;
    }
}
