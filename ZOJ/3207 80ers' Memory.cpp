/*
����һЩ�ַ�����������һЩ�ַ��������ж��ٸ���������ֹ���

�ø�set������ģ��Ϳ�����

�ؼ��ʣ����⣬STL 
*/
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int N;
    cin>>N;
    set<string> s;
    while(N--)
    {
        string c;
        cin>>c;
        s.insert(c);
    }
    
    int K;
    cin>>K;
    while(K--)
    {
        int n;
        cin>>n;
        int count=0;
        while(n--)
        {
            string c;
            cin>>c;
            if(s.find(c)!=s.end())count++;
        }
        cout<<count<<endl;
    }
}
