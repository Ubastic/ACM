/*
1Ӣ�߳���һ�����Ӵ�nӢ����ľ�����������ÿ������uӢ����һ�����»�dӢ�ߣ�n<100,u>d�����ö೤ʱ������

ע�����һ���������Ͳ����µ��� 

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    int n,u,d;
    while(cin>>n>>u>>d && (n!=0 || u!=0 || d!=0))
    {
	    if(u>=n)cout<<1<<endl;
		else cout<<2*((n-u-1)/(u-d)+1)+1<<endl;
	}
}
