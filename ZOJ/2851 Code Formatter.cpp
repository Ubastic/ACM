/*
����һ�δ��룬Ҫ������е�'\t'�滻Ϊ�ĸ��ո񣬲���ɾ��ÿ��ĩβ����Ŀո�
����滻�˼���'\t'��ɾ���˼����ո�

��һ��һ�еĶ���ÿ��һ����һ��
�ҳ������ַ������е�'\t'����replace��Ա�����滻����
�ٴ��ַ���ĩβ��ʼ�ҳ��ж��ٸ��ո�

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int tab=0,space=0;
        while(getline(cin,s))
        {
            if(s=="##")break;
            
            for(int i=0;i<s.length();i++)
                if(s[i]=='\t')
                {
                    tab++;
                    s.replace(i,1,"    ");
                }
                
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s[i]==' ')space++;
                else break;
            }
        }
        cout<<tab<<" tab(s) replaced"<<endl;
        cout<<space<<" trailing space(s) removed"<<endl;
    }
    
    //while(1);
} 
