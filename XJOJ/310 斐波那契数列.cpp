/*
f[n]=(f[n-1]+f[n-2])%10100������n<10^15����f[n]

�����п϶�Ϊѭ������
���ѭ������Ϊ10100^2
�ȱ�̵õ������е�ѭ������Ϊ300
����֪��Ϊʲô��ģ10100�������������ˣ����ɱ�����ڶ��ޱȴ�
Ȼ��ͼ��˴��������ٸ�����������ȡģ������
�����ܴ���long long

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int f[300]={1,1};
    long long n; 
    
    for(int i=2;i<300;i++)
        f[i]=(f[i-1]+f[i-2])%10100;
        
    while(cin>>n)
    {
        if(n==0)break;
        cout<<f[(n-1)%300]<<endl;
    }
    
    //while(1);
} 
