/*
��d(n)Ϊn��n�ĸ�λ���ֵĺͣ����nΪd(n)����Ԫ��Ҫ��˳�����1000000��û������Ԫ������

�������Ǽ���������Ԫ�����֣�û�б�ǵľ�����Ҫ�����
��1��ʼ�����жϸ����Ƿ�������Ԫ��ͬʱ������¸����ĺ�� 

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

bool self[1000001]={false};

int main()
{
    int sum,temp;
    
	for(int i=1;i<=1000000;i++)
    {
		if(self[i]==false)cout<<i<<endl;

		sum=temp=i;
		while(temp>0)
        {
			sum+=temp%10;
			temp/=10;
		}
		if(sum<=1000000)self[sum]=true;
	}
	return 0;
}
