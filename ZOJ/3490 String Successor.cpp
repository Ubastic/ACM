/*
���ַ�����λ�������Ǵ������󣬸���ĸ�����ּ�1�������λ�ˣ���ô��ߵ���һ����ĸ������Ҳ��1
����ַ�����û����ĸ��������ֻ�����ұߵļ�1
�������ߵĽ�λ������һλͬ���͵���ĸ������

���չ���ֱ����
��λ��һ��ѭ������û�н�λ���˳�

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<string>
using namespace std;

bool alphanumerics(char c)
{
    if(c>='0' && c<='9')return true;
    if(c>='a' && c<='z')return true;
    if(c>='A' && c<='Z')return true;
    return false;
}//�ж�һ���ַ��Ƿ�Ϊ��ĸ������ 

bool nonalphanumerics(string s)
{
    for(int i=0;i<s.length();i++)
        if(alphanumerics(s[i])==true)return true;
    return false;
}//�ж��ַ������Ƿ�����ĸ������ 

int leftmost_alphanumerics(string s)
{
    for(int i=0;i<s.length();i++)
        if(alphanumerics(s[i])==true)return i;
}//��������ߵ���ĸ�����ֵ�λ�� 

string successor(string s)
{
    if(nonalphanumerics(s)==false)
    {
        s[s.length()-1]++;
        return s;
    }
    
    int leftmost=leftmost_alphanumerics(s);
    
    for(int i=s.length()-1;i>leftmost;i--)
    {
        if(alphanumerics(s[i])==true)
        {
            if((s[i]>='0'&&s[i]<'9')||(s[i]>='a'&&s[i]<'z')||(s[i]>='A'&&s[i]<'Z'))
            {
                s[i]++;return s;
            }
            else if(s[i]=='9')s[i]='0';
            else if(s[i]=='z')s[i]='a';
            else if(s[i]=='Z')s[i]='A';
        }
    }
    
    if(s[leftmost]=='9')
    {
        s[leftmost]='0';
        s.insert(s.begin()+leftmost,'1');
    }
    else if(s[leftmost]=='z')
    {
        s[leftmost]='a';
        s.insert(s.begin()+leftmost,'a');
    }
    else if(s[leftmost]=='Z')
    {
        s[leftmost]='A';
        s.insert(s.begin()+leftmost,'A');
    }
    else s[leftmost]++;
    
    return s;
}//��λ���� 

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string s;
        cin>>s>>n;
        
        for(int i=0;i<n;i++)
        {
            s=successor(s);
            cout<<s<<endl;
        }
        
        cout<<endl;
    }
}
