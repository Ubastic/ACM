/*
����һ���е��ַ������������

��cin.getline����ѧ����reverse����
����ע��ignore��������÷���ԭ��

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    cin.ignore();//���Ե��������Ļس���������Ҫ������������� 
    while(testcase--)
    {
        char s[80];
        cin.getline(s,80);
        reverse(s,s+strlen(s));
        cout<<s<<endl;
    }
}
