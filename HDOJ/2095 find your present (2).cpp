/*
һ������ֻ��һ����Ψһ�ģ��������ֳ��ֵĴ�������ż�������Ǹ�Ψһ������

��setģ��һ��Ϳ�����

�ؼ��ʣ�STL������ 
*/
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
	    set<int> s;
	    for(int i=0;i<n;i++)
	    {
		    int a;
	        scanf("%d",&a);
	        if(s.find(a)==s.end())s.insert(a);
	        else s.erase(a);
		}
		cout<<*s.begin()<<endl;
	}
}
