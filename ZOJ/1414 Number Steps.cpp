/*
��ԭ��ͼ����������(0<x,y<5000)�������λ�õ����֣�û�������No Number

�ҳ������ߵĹ��ɾͿ�����

�ؼ��ʣ����㷨 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,a,b;    
    //freopen("aaa.txt","r",stdin);
    cin>>n;
    while(cin>>a>>b)
    {
        if(a==b)
        {
            if(a%2==0)cout<<a+b<<endl;
            else cout<<a+b-1<<endl;
        }
        else if(a==b+2)
        {
            if(a%2==0)cout<<a+b<<endl;
            else cout<<a+b-1<<endl;
        }
        else cout<<"No Number"<<endl;                     
    }

    //while(1);  
    return 0;
}

