/*
�滻����

ֱ��������map����ձ���Щ��ע�����ĵĽ���������'\n'����'\r'
����������ݺ÷���ѽ��������ԭ�����ʱ��Ҫ�������������� 

�ؼ��ʣ����⣬�ַ��� 
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() 
{ 
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {  
        string s;
        do 
        { 
            getline(cin,s);
        }while (isalpha(s[0])==false);
        
        map<char,char> m;
        for(char i='A';i<='Z';i++)
            cin>>m[i];
            
        for(int i=0;i<s.length();i++) 
            if(s[i]>='A' && s[i]<='Z')s[i]=m[s[i]];
            
        cout<<t<<' '<<s;
    } 
} 
