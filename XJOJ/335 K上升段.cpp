/*
n������������ϳ�k����������ܵ������

���ҹ��ɣ���Ϊn����Ϊk��
1
1 1
1 4 1
1 11 11 1
1 26 66 26 1
���������һ������ϵ��K(n,k)=(n+1-k)*K(n-1,k-1)+k*K(n-1,k)
��֪��Ϊʲô

�ؼ��ʣ����㷨���ݹ� 
*/
#include<iostream>
using namespace std;

long long K(int n,int k)
{
    if(k==1 || k==n)return 1;
    else return (n+1-k)*K(n-1,k-1)+k*K(n-1,k);
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<K(n,k);
}
