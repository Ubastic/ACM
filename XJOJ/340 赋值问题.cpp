/*
����һ�Ѹ�ֵʽ�����ֻ��a��ȷ��ֵ����������ȷ��ֵ�ı���

��Ϊ����ֻ��26����a=1��ʾ��ȷ��ֵ��0��Ϊ��ȷ��ֵ
������ʽ�����������
������ֵΪ1�ı���

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    bool c[26]={1};
    char e[4];
    int n;
    cin>>n;
    
    while(n--)
    {
        cin>>e;
        c[e[0]-'a']=c[e[2]-'a'];

    }
    
    int count=0;
    for(int i=0;i<26;i++)
        if(c[i]==1)count++;
     
    for(int i=0;i<26;i++)
        if(c[i]==1)cout<<char(i+'a')<<' ';
    
    if(count==0)cout<<"none";
    
    //while(1);
    return 0;
}
