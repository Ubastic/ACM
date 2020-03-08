/*
����ȱ�ڵĳ��ȱ�����Ϊ�����������Ĳ����һ������������������������ȱ�ڳ���

ɸ�������Χ�ڵ�����
�������ɸ��ֱ���ҡ�

�ؼ��ʣ�ɸ�������ۣ����� 
*/
#include<iostream>
using namespace std;

bool prime[1299710];

int main()
{
    for(int i=2;i<1299710;i++)
        prime[i]=true;
    for(int i=2;i*i<=1299719;i++)
        if(prime[i]==true)
            for(int j=2*i;j<1299710;j+=i)
                prime[j]=false;
                
    int k;
    while(cin>>k && k)
    {
        int left,right;
        for(left=k;prime[left]==false;left--);
        for(right=k;prime[right]==false;right++);
        cout<<right-left<<endl;
    }
}
