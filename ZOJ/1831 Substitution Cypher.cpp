/*
����������ĸ�Ͷ�Ӧ��������ĸ���ٸ���һ�����ģ�������ĸ�滻��������ģ�ÿ�в�����64����ĸ

���취һ��һ���滻

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char plaintext[65];
    char substitution[65];
    char text[65];
    
    gets(plaintext);
    gets(substitution);//��¼��ո� 
    
    cout<<substitution<<endl<<plaintext<<endl;
    
    while(gets(text))
    {
        for(int i=0;i<strlen(text);i++)
            for(int j=0;j<strlen(plaintext);j++)
                if(text[i]==plaintext[j]){text[i]=substitution[j];break;}

        cout<<text<<endl;
    }
}
