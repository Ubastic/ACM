/*
A+B problem

�ؼ��ʣ�����  
*/
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int M,sum=0;
		cin>>M;
		while(M--)
		{
		    int a;
		    cin>>a;
		    sum+=a;
		}
		cout<<sum<<endl;
		if(N>0)cout<<endl;
	}
}
