/*
�����ƴ���1�ĸ���Ϊ������Ϊ��odd parity��������Ϊ��even parity��
����һ�������ƴ������һλ���滻Ϊ'e'��'o'����ԭ��

ֱ��ͳ�ƣ��жϣ�һ�ģ����

�ؼ��ʣ����� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="#")break;
        
        int count=0;
        for(int i=0;i<s.length();i++)
            if(s[i]=='1')count++;
            
        int last=s.length()-1;
        if(s[last]=='e')
        {
            if(count%2==0)s[last]='0';
            else s[last]='1';
        }
        else
        {
            if(count%2==0)s[last]='1';
            else s[last]='0';
        }
        cout<<s<<endl;
    }
} 
