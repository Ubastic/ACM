/*
��������column����ԭ������д��column��
�ٰ���s�Ϳɵõ����ġ�������֪���ĺ�column����ԭ��

��Ϊ��s�ͼ��ܵ�
���Զ������ĺ��ż���е��Ӵ���ת
Ȼ��һ��һ���ַ��ļӵ����ж�Ӧ��string��
�������Ϳ�����

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int column;
    char c[200];
    while(cin>>column)
    {
        if(column==0)break;
        
        cin>>c;
        string s[20];
        for(int start=column;start<strlen(c);start+=2*column)
            reverse(c+start,c+start+column);
            
        for(int i=0;i<strlen(c);i++)
            s[i%column]+=c[i];
        
        for(int i=0;i<column;i++)
            cout<<s[i];
        cout<<endl;
    }
} 
