/*
����һ�������ַ�������������ͬ��ѹ��ΪkX�ĸ�ʽ���

�õ���string�����erase������ע���÷�
������������һ�����һ��ɾһ��

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    while(cases--)
    {
        string s;
        cin>>s;
        
        while(s.length()>0)
        {
            int i;
            for(i=0;s[i+1]==s[i];i++);
            cout<<i+1<<s[i];
            s.erase(0,i+1);//�ú���ĥ��ô�ã�ɾ������s[0]��s[i] 
        }
        cout<<endl;
    }
    
    //while(1);
} 
