/*
�������Ϣ�������������������ںͼ۸�Ҫ���ĸ��žͰ��ĸ���

�õ���sort�������Զ���ȽϺ���
�����ͱȽϺ������
�Իس�������Ҳ�Ƚ��ϸ񣬷������prezentation error 

�ؼ��ʣ�STL������ 
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Book
{
    string Name;
    int Year;
    int Price;
};

bool compare_Name(Book n,Book m)
{
    if(n.Name!=m.Name)return n.Name<m.Name;
    else if(n.Year!=m.Year)return n.Year<m.Year;
    else return n.Price<m.Price; 
}
bool compare_Year(Book n,Book m)
{
    if(n.Year!=m.Year)return n.Year<m.Year;
    else if(n.Name!=m.Name)return n.Name<m.Name;
    else return n.Price<m.Price; 
}
bool compare_Price(Book n,Book m)
{
    if(n.Price!=m.Price)return n.Price<m.Price;
    else if(n.Name!=m.Name)return n.Name<m.Name;
    else return n.Year<m.Year; 
}

int main()
{
    int n;
    int testcase=0;
    while(cin>>n)
    {
        if (n==0)break;
        if(testcase++!=0)cout<<endl;
        
        Book temp;
        vector<Book> v;
        for(int i=0;i<n;i++)
        {
            cin>>temp.Name>>temp.Year>>temp.Price;
            v.push_back(temp);
        }
        
        string key;
        cin>>key;
        if(key=="Name")sort(v.begin(),v.end(),compare_Name);
        else if(key=="Year")sort(v.begin(),v.end(),compare_Year);
        else if(key=="Price")sort(v.begin(),v.end(),compare_Price);

        for(int i=0;i<n;i++)
        {
            cout<<v[i].Name<<' '<<v[i].Year<<' '<<v[i].Price<<endl;
        }
    }
}
