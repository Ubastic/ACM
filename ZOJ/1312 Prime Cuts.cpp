/*
����1<=n<=1000,1<=c<n���ڲ�С��n���������У�
�����������������������м�2*c-1�������������ż������������м�2*c��

������1Ҳ����Ϊ������
����һ������������1000�ڵ���������һ�������������n�������м�������
��left��right���������Ҫ����������ź��ұ����������
ע��n=c=1������Լ�2*c>p(n)�����
��ʽ���Ҳ����

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int prime[169]={1,2};
    int save[1001]={0,1}; 
    int n=2,c;
    int left,right;
    
    for(int i=3;i<1000;i+=2)
    {
        for(int k=1;prime[k]*prime[k]<=i;k++)
        {
            if(i%prime[k]==0)goto end;
        }
        prime[n++]=i;
        end:;
    }//����1000�ڵ�168������ 

    n=1;
    for(int i=2;i<=1000;i++)
    {
        if(i==prime[n])n++;
        save[i]=n;
    }//prime[n]��ʾ��n�������ж�������������n 

    while(cin>>n>>c)
    {
        cout<<n<<' '<<c<<':';
        if(n==1){cout<<' '<<1<<endl<<endl;continue;}
        
        left=(save[n]+1)/2-c;
        if(left<0)left=0;
        right=save[n]-left;
        
        for(int i=left;i<right;i++)
            cout<<' '<<prime[i];
        cout<<endl<<endl; 
    }

    return 0;
} 
