/*
�����ֵ��еĵ��ʣ�������һ�λ��������λ��������ֵ�ĵ��ʷֱ���ֵĴ����Լ�û���ֵ�ĵ�����

ֱ��ģ�⣬��map����ʵ��

�ؼ��ʣ�map��STL 
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n;
    cin>>n;
    
    map<string,int> m;
    string dictionary[1000];
    for(int i=0;i<n;i++)
    {
        cin>>dictionary[i];
        m[dictionary[i]]=0;
    }
    
    string word;
    int other=0;
    while(cin>>word)
    {
        if(m.find(word)==m.end())
            other++;
        else m[word]++;
    }
    
    for(int i=0;i<n;i++)
        cout<<m[dictionary[i]]<<endl;
    cout<<other<<endl;
    
    //while(1);
}
