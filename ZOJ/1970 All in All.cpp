/*
��s��t�����ַ������ж�s�Ƿ�t������s�е��ַ��ɼ�ϳ�����t�У���˳������

��s�ĵ�һ����ĸ��ʼ��һ�����ļ��t���Ƿ���

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s,t;

    while(cin>>s>>t)
    {
        int m=0;
        for(int i=0;i<s.length();i++)
        {
            for (int j=m;j<t.length();j++)
            {
                if(s[i]==t[j]){m=j+1;break;}
                if(j==t.length()-1){cout<<"No"<<endl;goto end;}
            }
        }
        cout<<"Yes"<<endl;
        end:;
    }
    
    return 0;
}
