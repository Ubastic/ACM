#include<iostream>//���������һ�����м���������������ܳ�m
using namespace std;
int main()
{
	int n,m;
	int tem;
	int x;
	while(cin>>n>>m)
	{
		int a[5001]={0};
		a[0]=1;
		tem=0;
		while(n--)
		{
			cin>>x;
			tem+=x;//�����������ȡ��
			tem=tem%m;
			a[tem]++;//��¼��ͬ�������ĸ���
		}
		int i;
		int sum=0;
		for(i=0;i<m;i++)
		{
			if(a[i]>=2)
				sum+=a[i]*(a[i]-1)/2;//����ȡ�������,�������ֻ��һ����һ������������һ��
		}
		cout<<sum<<endl;
	}
}