/*
��һ����������һ��һС�����

�ؼ��ʣ����� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        int s[10000];
        for(int i=0;i<N;i++)
            cin>>s[i];
        
        sort(s,s+N);
        int start=0;
        int end=N-1;
        
        while(start<end)
        {
            cout<<s[end]<<' ';
            cout<<s[start];
            end--;start++;
            if(end>=start)cout<<' ';
        }
        if(start==end)cout<<s[end];
        cout<<endl;
    }
}
