/*
Լɪ�򻷣�n��һ��Ȧ��ÿ��k�����ߵ�һ�������ߵ���m���ˣ������ʣ˭

�ٶȰٿ���һ�£����Եõ����Ӷ�Ϊn�ĵ��ƣ��ݹ飩 
�������Ĭ���ǵ�0���˿�ʼ��
�������Ҫת��һ�� 

�ؼ��ʣ����㷨��Լɪ�� 
*/
#include<iostream>
using namespace std;

int Joe(int n,int k)
{
    if(n==1)return 0;
    return (Joe(n-1,k)+k)%n;
}

int main()
{
    int n,k,m;
    while(cin>>n>>k>>m)
    {
        if(n==0 && k==0 && m==0)break;
        cout<<(Joe(n,k)-(k%n-m)+n)%n+1<<endl;
    }
}
