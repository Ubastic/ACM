/*
��ԭ��ͨ�����滻��ĸ��Ȼ�󽻻���ĸλ�õķ�ʽ���ܣ��������ĺ�ԭ�ģ����ԭ���Ƿ���Լ��ܳɸ�����

�������ĺ�ԭ���ַ���
�����Ƿ���multiset��
Ȼ��ʼɾ��set�ĵ�һ��Ԫ�أ�ֱ��ɾ��Ϊֹ
ɾ��ĳԪ��ʱ�᷵��һ��ɾ�˼���Ԫ�أ������ַ������м���������ͬ����ĸ
�ѷ��ص�ֵ����vector������
�����ַ�����õ�����vector�����ҽ���������vector��ȫ��ͬʱ�����yes

�ؼ��ʣ����룬�ַ�����STL 
*/
#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        multiset<char> encrypt,original;
        while(s1.length()>0)
        {
            encrypt.insert(s1[0]);
            s1.erase(s1.begin());
        }
        while(s2.length()>0)
        {
            original.insert(s2[0]);
            s2.erase(s2.begin());
        }
        
        vector<int> a,b;
        while(encrypt.size()>0)
            a.push_back(encrypt.erase(*encrypt.begin()));
        while(original.size()>0)
            b.push_back(original.erase(*original.begin()));
            
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
