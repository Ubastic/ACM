/*
��������ַ���������������aaa*bbb���ַ��������������

��������ͨ�İ취����
�ؼ���ϸ�ںܸ��ӣ�����Ҫ�Ѵ��Ǻŵ��ַ����ֳ��Ǻ���ߺ��ұ������ַ���

�ؼ��ʣ��ַ��������� 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void separate(string a,string &b,string &c)
{
    int position=a.find("*");
    c=b=a;
    b.erase(position,a.length());
    c.erase(0,position+1);
}

bool judge(string s,string a,string b)
{
    if(s.find(a)!=0)return false;
    s.erase(0,a.length());
    reverse(s.begin(),s.end());
    reverse(b.begin(),b.end());
    if(s.find(b)!=0)return false;
    else return true;
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    int n,m;
    int c=0;
    while(cin>>n)
    {
        if(c++>0)cout<<endl;
                 
        string s[100];
        for(int i=0;i<n;i++)
            cin>>s[i];
        
        cin>>m;
        for(int i=0;i<m;i++)
        {
            string search;
            cin>>search;
            string left,right;
            separate(search,left,right);
            
            int cc=0;bool a=false;
            for(int i=0;i<n;i++)
            {
                if(judge(s[i],left,right)==true)
                {
                    if(cc++>0)cout<<", ";
                    cout<<s[i];
                    a=true;
                }
            }
            if(a==false)cout<<"FILE NOT FOUND"<<endl;
            else cout<<endl;
        }
    }
    //while(1);
}
