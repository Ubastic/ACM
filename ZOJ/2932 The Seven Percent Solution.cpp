/*
����һ���ַ��������ո�Ҫ������е�7���ַ�ת������Ӧ�Ĵ���

������cin.getline
Ȼ��һ��һ���ַ����ң��ҵ��˾���replace����
�������

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char c[80];
    
    while(cin.getline(c,80))
    {
        if(c[0]=='#')break;
        
        string s=c;
        for(int i=0;i<s.length();i++)
        {
            switch(s[i])
            {
                case ' ':s.replace(i,1,"%20");break;
                case '!':s.replace(i,1,"%21");break;
                case '$':s.replace(i,1,"%24");break;
                case '%':s.replace(i,1,"%25");break;
                case '(':s.replace(i,1,"%28");break;
                case ')':s.replace(i,1,"%29");break;
                case '*':s.replace(i,1,"%2a");break;
            }
        }
        cout<<s<<endl;
    }
} 
