/*
n��������ͬ���ļ�����û�п��ܰ����Ƿֱ�ѹ���ɲ�����b��������λ���ļ���

������b��������λ�����п��ܣ��ǳ���Ϊ0,1,2,...,b�Ĵ�
ÿ�����Ĳ�ͬ���Ϊ1,2,4,...,2^b
�����Ϊ2^(b+1)-1���ж�����n�Ĵ�С

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    long long n,b;
    cin>>n>>b;
    
    long long different=1;
    for(int i=1;i<=b+1;i++)
        different*=2;
    different--;

    if(n>different)cout<<"no";
    else cout<<"yes";
    
    //while(1);
}
