/*
�ҳ�һ���������������������ʻ򶼲����ʵ����Ķ���

�ҳ�һ������ڶ��������ʣ�������������ʵĶ��������ܵ�����������õ�����
���������ȥ

�ؼ��ʣ���ѧ�� 
*/ 
#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b==0)return a;
    return GCD(b,a%b);
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int num[800];
        for(int i=0;i<n;i++)
            cin>>num[i];
            
        int total=n*(n-1)*(n-2)/6;
        for(int i=0;i<n;i++)
        {
            int A=0,B=0;
            for(int j=0;j<n;j++)
                if(i!=j)
                    if(GCD(num[i],num[j])==1)A++;
                    else B++;
            total-=A*B/2;
        }
        
        cout<<total<<endl;
    }
    //while(1);
}
