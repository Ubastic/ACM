/*
������������С�����������Լ��

ֱ����

�ؼ��ʣ����⣬���� 
*/
#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(a%b==0)return b;
    else return GCD(b,a%b);
}

int LCM(int a,int b)
{
    return a/GCD(a,b)*b;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<i<<' '<<LCM(a,b)<<' '<<GCD(a,b)<<endl;
    }
}
