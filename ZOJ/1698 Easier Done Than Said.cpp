/*
�ж�����Сд�ַ����Ƿ����Ҫ��һ��Ҫ����Ԫ����ĸ����������������Ԫ��������ĸ������������"ee","oo"�ⲻ����˫д��ĸ

��һ���ж�Ԫ����ĸ�ĺ�����Ȼ�����������ȿ�

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<cstring>
using namespace std;

bool vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
    else return false;
}
 
int main()
{
    string word;
    bool judge;
    
    while(cin>>word)
    {
        if(word=="end")return 0;
        
        judge=false;
        for(int i=0;i<word.length();i++)
            if(vowel(word[i])==true)judge=true;

        if(word.length()>2)
        for(int i=0;i<word.length()-2;i++)
        {
            if(vowel(word[i])==true &&vowel(word[i+1])==true &&vowel(word[i+2])==true )judge=false;
            if(vowel(word[i])==false&&vowel(word[i+1])==false&&vowel(word[i+2])==false)judge=false;
        }

        if(word.length()>1)
        for(int i=0;i<word.length()-1;i++)
        {
            if(word[i]==word[i+1]&&word[i]!='e'&&word[i]!='o')judge=false;
        }

        if(judge==true)cout<<"<"<<word<<"> is acceptable."<<endl;
            else cout<<"<"<<word<<"> is not acceptable."<<endl;
    }
}
