/*
һ�������Բ�ֳɼ������ĺͣ��⼸��������ǻ��ĵ���ʽ���������n/2�����ұ�n/2��Ҳ���ǻ��ģ���˵ݹ飬��еݹ����
����һ������������ĵݹ���ĵĲ����

���ֱ�������и����Ķ����õݹ����Ļ��ᳬʱ
���Զ���һ�����飬�ѵݹ�ĳɵ���

�ؼ��ʣ����ƣ����ģ��ݹ� 
*/
#include<iostream>
using namespace std;

int main()
{
    unsigned long long palindromic[15726]={0};
    palindromic[0]=1;
    
    for(int i=1;i<15726;i++)
        for(int j=0;j<=i/2;j++)
            palindromic[i]+=palindromic[j];

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<i<<' '<<palindromic[n]<<endl;
    }
}
