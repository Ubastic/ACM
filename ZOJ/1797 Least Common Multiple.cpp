/*
����һ������������ǵ���С������

���Լ������С���������������챳������
LCMע���ȳ����

�ؼ��ʣ����⣬���ۣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(a<b)return GCD(b,a);
    
    if(b==0)return a;
    else return GCD(b,a%b); 
}

int LCM(int a,int b)
{
    return a/GCD(a,b)*b;//�ȳ���ˣ�������� 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a,b;
        cin>>a;
        for(int i=1;i<n;i++)
        {
            cin>>b;
            a=LCM(a,b);
        }
        cout<<a<<endl;
    }
} 
