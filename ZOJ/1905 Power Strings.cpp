/*
�����ַ���a��n�η�Ϊn��a��ӣ�a^0=""�������ַ���s����s=a^n������n�����ֵ

��s�ĳ��ȵ�Լ�����֣�һ��һ�������Ƿ����
�ݹ�Ҳ��Ҳ��

�ؼ��ʣ��ַ������ݹ�
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    
    while(cin>>s)
    {
        if(s==".")return 0;
        
        string a;
        int len=s.length();
        int i,j;

        for (i=1;i<len;i++)
        {
            if(len%i==0)
                for (j=i;j<2*i;j++)
                    for(int k=j;k<len;k+=i)
                        if (s[k]!=s[k-i])goto end;
     
            end:if(j>=2*i)break;    
        }

        cout<<len/i<<endl;
    }
}
