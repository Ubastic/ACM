/*
���������ɫ���ַ�������������ִ��������Ǹ�

��map��
��Ϥ��ô��map����

�ؼ��ʣ�STL��map������ 
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        string s;
        map<string,int> m;
        while(n--)
        {
            cin>>s;
            m[s]++;
        }
        
        int max=0;
        map<string,int>::iterator it,it2;
        for(it=m.begin();it!=m.end();it++)
            if((*it).second>max)
            {
                max=(*it).second;
                it2=it;
            }
            
        cout<<(*it2).first<<endl;
    }
}
