/*
����������֣�������������ǵ�һ����������������ֱ��ĩβ���ٴӺ���ǰ���

��vector�Ĳ��룬�����ݵ�ʱ��Ͳ��Ŷ�
Ȼ��ֱ�����

�ؼ��ʣ�STL������ 
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n;
    int c=1;
    while(cin>>n)
    {
        if(n==0)break; 
                   
        vector<string> v;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v.insert(v.begin()+(i+1)/2,s);
        }
        
        cout<<"SET "<<c++<<endl;
        for(int i=0;i<n;i++)
            cout<<v[i]<<endl;
    } 
}

