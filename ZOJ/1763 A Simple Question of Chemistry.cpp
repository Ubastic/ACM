/*
����һ��һ����С����������ǵĲҪ��С���������λ

�õ��˱�׼�����������֪ʶ
pricision��fixed

�ؼ��ʣ����⣬�����ʽ 
*/
#include<iostream>
using namespace std;

int main()
{
    double a,b;
    cin>>a;
    while(cin>>b)
    {
        if(b==999)break;
        
        cout.precision(2);
        cout<<fixed<<b-a<<endl;
        a=b;
    }
    cout<<"End of Output";
} 
