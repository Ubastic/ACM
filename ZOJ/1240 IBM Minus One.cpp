/*
��һ����д�ַ�����ÿ����ĸ��������һ����ĸ��Z����A

Z����Aʵ������һ��ѭ������%26��������

�ؼ��ʣ��ַ���������
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,len;
    char s[50];
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {   
        cin>>s;
        len=strlen(s);
        
        cout<<"String #"<<i<<endl;
        
        for (int j=0;j<len;j++)
            cout<<char((s[j]+1-'A')%26+'A');//�ؼ���ѭ��
            
        cout<<endl<<endl;
    }
    
    //while(1);
    return 0;
}
