/*
����n<=100�д�д��ĸ��ÿ�в�����100���ַ������ظ�����BBBB��дΪ4B�����

����������ϸ�ĵ�

�ؼ��ʣ����� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char code[101];
    int n,len;
    
    cin>>n;
    while(n--)
    {
        cin>>code;
        len=1;
        for(int i=0;i<strlen(code);i++)
        {
            if(code[i]==code[i+1]){len++;continue;}
            else 
            {
                if(len==1)cout<<code[i];
                    else cout<<len<<code[i];
                len=1;
            }
        }
        cout<<endl;
    }
    
    return 0;
} 
