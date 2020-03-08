/*
����n�����������������a��2��������ϣ�������b�Ի��ʣ�b/a����ΪԲ���ʣ���������������ý���ֵ

a=n*(n+1)/2
��ٷ�������ʵ������b����

�ؼ��ʣ���ѧ��
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,s,m,a[50];
    int gcd(int n,int m);
    
    while(cin>>n,n!=0)
    {
        s=0;
        m=n*(n-1)/2;         //pai�ķ�ĸ
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(gcd(a[i],a[j])==1)s++;      //pai�ķ���
    
        if(s>0)printf("%.6f\n",sqrt(6.0/double(s)*m));
            else cout<<"No estimate for this data set."<<endl;
    }
    
    return 0;
}

int gcd(int n,int m)       //�����Լ���ĺ���
{
    int r;
    while(m)
    {
        r=n%m;
        n=m;
        m=r;
    }
    return n;
}
