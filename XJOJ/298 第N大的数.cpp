/*
�������飬����������K�����

����һ�ο��ţ�ע��ȽϺ��������ŵ��÷�

�ؼ��ʣ����� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a[100];
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        
        sort(a,a+n,greater<int>());//����
        cout<<a[k-1]<<endl; 
    }
    return 0;
}
