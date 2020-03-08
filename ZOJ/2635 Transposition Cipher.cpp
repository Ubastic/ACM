/*
���뷭�룬�����������ܣ��ܳ��õģ����巭�뷽����ԭ�⣬�������ĺ�key���������

�ⲻҪ���㷨��������Ҫ�ܸߵļ��ɲ���ʵ��
��������STL�Ķ����ܸ�����ı������
��Ҫ��key����ĸ��λ������mapʵ��

�ؼ��ʣ��ַ��������룬STL��map 
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

struct Code
{
    int length;
    string plaintext;
};

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string key,ciphertext;
        cin>>key>>ciphertext;
        
        map<char,Code> m;
        for(int i=0;i<key.length();i++)
        {
            Code c;
            c.length=ciphertext.length()/key.length();
            if(i<ciphertext.length()%key.length())
                c.length++;
            m[key[i]]=c;
        }
            
        map<char,Code>::iterator it;
        int point=0;
        for(it=m.begin();it!=m.end();it++)
        {
            int length=(*it).second.length;
            string s;
            for(int i=0;i<length;i++,point++)
                s.push_back(ciphertext[point]-'A'+'a');
            
            (*it).second.plaintext=s;
        }
        
        for(int i=0;i<ciphertext.length();i++)
        {
            string &s=m[key[i%key.length()]].plaintext;
            cout<<s[0];
            s.erase(s.begin());
        }
        cout<<endl;
    }
    //while(1);
}
