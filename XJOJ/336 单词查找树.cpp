/*
��һ�õ��ʲ������Ľڵ��������ʲ������Ķ��忴ԭ��

����ֱ�ӽ�һ�������������ڵ���
Ҳ�����Ż�һ�£��ѵ����ź���Ȼ��ÿ�������������Ľڵ������Ǻ�ǰһ�����ʵĲ
����ASCY��ASCKQW������ǰ��Ĺ��д���ASC�����Եڶ���������KQW�����ڵ�

�ؼ��ʣ��������㷨 
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n=0;
    string word[100000];
    while(cin>>word[n++]);
    
    sort(word,word+n);
    
    int node=1+word[0].length();
    for(int i=1;i<n;i++)
    {
        int j=0;
        while(j<word[i-1].length() && j<word[i].length())
        {
            if(word[i-1][j]!=word[i][j])break;
            j++;
        }
        
        node+=word[i].length()-j;
    }
    
    cout<<node<<endl;
    //while(1);
}
