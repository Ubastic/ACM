/*
��n��ʿ����ÿ��ɾ�������ŵ��˻�ż���ŵ��ˣ�ֱ��ʣ���ˣ��������ж��������

n����ɾ��������ż���ֱ��ʣ��n/2��n-n/2����
������������ȫ��ͬ��
���Կ����õݹ����������ֱ��n=3��n<3

�ؼ��ʣ��ݹ� 
*/
#include<iostream>
using namespace std;

int count(int n)
{
    if(n==3)return 1;
    if(n<3)return 0;
    
    return count(n/2)+count(n-n/2);
}

int main()
{
    int n;
    while(cin>>n)
        cout<<count(n)<<endl;
}
