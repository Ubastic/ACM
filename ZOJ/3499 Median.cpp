/*
����һϵ�����ݣ����������λ��

��sort��������������м�����ֻ��м�������ƽ����

�ؼ��ʣ����� 
*/
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        
        double arr[1000];
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        sort(arr,arr+n);
        if(n%2==1)printf("%.3lf\n",arr[n/2]);
        else printf("%.3lf\n",(arr[n/2]+arr[n/2-1])/2);
    }
}
