/*
����һЩ���ʶ�Ӧ���������ԣ�������һЩ���󵥴ʣ�������ǵķ���

mapӳ��������
����������Щ��Ҫ����
sscanf 

�ؼ��ʣ�STL��map������ 
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,string> m;
    map<string,string>::iterator p;
    char word[100];
    
    while(gets(word))
    {
        if(strlen(word)==0)break;
        
        char w[100],mouse[100];
        sscanf(word,"%s %s",w,mouse);
        m[mouse]=w;
    }
    
    while(cin>>word)
    {
        p=m.find(word);
        if(p!=m.end())cout<<m[word]<<endl;
        else cout<<"eh"<<endl;
    }
}
