/*
��1��ʼ����������7�ı�������7�����ֺ�CocaCola������1<=p<=99�����������p��ʱ�������ʼ����

���������ֱ�ӷ���p<100ʱ�Ĺ��ɣ�ֱ�����������

�ؼ��ʣ����㷨 
*/
#include<iostream>
using namespace std;

int main()
{
    int t,p;
    
    cin>>t;
    while(t--)
    {
        cin>>p;
        
        if (p==1)cout<<7<<endl;
   else if (p==2)cout<<27<<endl;
   else if (p>=3 && p<=10)cout<<70<<endl;
   else if (p==11)cout<<270<<endl;
   else cout<<700<<endl;
    }
}
