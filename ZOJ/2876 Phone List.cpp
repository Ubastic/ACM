/*
�������绰���룬�жϻ᲻��׼����ĳһ���绰ʱ������ĵ绰��

����Ϊ�жϻ᲻���еĺ�����һ���ŵĿ�ͷ����911��9112345
�ȶ��룬������
Ȼ���ж�ǰһ���ǲ��Ǻ�һ�����ִ������Ӵ�λ���ڿ�ͷ
trie��ɶ�� 

�ؼ��ʣ��ַ������� 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[10000];   
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i];
            
        sort(s,s+n);
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i+1].find(s[i])==0)
            {
                cout<<"NO"<<endl;
                goto end;
            }
        }
        cout<<"YES"<<endl;
        end:;
    }
}
