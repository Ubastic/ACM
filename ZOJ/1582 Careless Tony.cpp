/*
������ȷ���ַ����ʹ����ַ�����Ҫɾ����ĵط��ش���Ҫ���೤ʱ��

����ȷ�ַ����ʹ����ַ�����һ��Ƚ�
����ӵ�i���ַ��״γ��ִ���
��Ҫɾ����i���ַ����ٴ���������
���Ի���ʱ��Ϊ(a.len-i)+(b.len-i) 

�ؼ��ʣ����⣬�ַ��� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int time;
        cin>>time;
        cin.ignore();
        
        string correct,type;
        getline(cin,correct);
        getline(cin,type);
        
        int i;
        for(i=0;i<correct.length() && i<type.length();i++)
            if(correct[i]!=type[i])break;
        
        cout<<time*(correct.length()-i+type.length()-i)<<endl;
    }
} 
