/*
���뿭�����룬���еĴ�д��ĸѭ��������λ

�򵥣����룬���룬���

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[200];
    string ss;
    while(cin.getline(s,200))
    {
        ss=s;
        if(ss=="START" || ss=="END")continue;
        if(ss=="ENDOFINPUT")break;
        
        for(int i=0;i<strlen(s);i++)
            if(s[i]>='A' && s[i]<='Z')
                s[i]=((s[i]-'A')+26-5)%26+'A';
        
        cout<<s<<endl;
    }
}
