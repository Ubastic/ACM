/*
��N^N�����ұ�һλ��

�ҹ��ɣ�����ֻ�и�λ�����ã�������ȫ�����
Ȼ����ĩβ�������������Ϊѭ���ģ����Դ�ӡregular���鿴һ��

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
	int regular[10][5];
	for(int i=0;i<10;i++)
	{
	    regular[i][0]=1;
	    for(int j=1;j<5;j++)
	        regular[i][j]=(regular[i][j-1]*i)%10;
	}
	
	int N;
	cin>>N;
	while(N--)
	{
		int n;
		cin>>n;
		cout<<regular[n%10][(n+3)%4+1]<<endl;
	}
}
