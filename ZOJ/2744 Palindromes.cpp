/*
����һ���ַ�����������ж��ٸ������Ӵ�

�Ը������ַ���ÿ����ĸΪ����������Ϊ�����ַ����Ļ�������
����ǻ��ĵģ�����������һλ������Ų����һ����ĸ��Ϊ��������
�������Ĳ���������ĸ�������Ҳ��������ĸ֮������
ֱ��ö�ٸ�����ĸ(һ������������)��Ϊ��������������չ������

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
using namespace std;

int main()
{
    char s[5000];
    while(cin>>s)
    {
        int count=0;
        
        for(int i=0;i<strlen(s);i++)
        {
            for(int left=i,right=i;left>=0 && right<strlen(s);left--,right++)
            {
                if(s[left]==s[right])count++;
                else break;
            }
        }
        for(int i=0;i<strlen(s)-1;i++)
        {
            for(int left=i,right=i+1;left>=0 && right<strlen(s);left--,right++)
            {
                if(s[left]==s[right])count++;
                else break;
            }
        }
        cout<<count<<endl;
    }
}
