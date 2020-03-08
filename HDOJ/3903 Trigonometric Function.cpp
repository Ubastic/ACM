/*
��֪���������߳�a,b,c��������ʽ���Ƿ�Ϊ������

cos(A),cos(B),cos(C)��Ϊ�������������Ҷ���
���Ը���Ϊ���ж�sin(A),sin(B),sin(C)�Ƿ�Ϊ������
��sin�Ĺ�ʽ�����棬��Ϊ��ȫƽ��������

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
#include<cmath>
using namespace std;

bool square(long long X)
{
    long long ans=sqrt(X*1.0);
    return ans*ans==X;
}

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long a,b,c,n,m,k;
        cin>>a>>b>>c>>n>>m>>k;
        
        long long A=4*b*b*c*c-(b*b+c*c-a*a)*(b*b+c*c-a*a);
        long long B=4*a*a*c*c-(a*a+c*c-b*b)*(a*a+c*c-b*b);
        long long C=4*a*a*b*b-(a*a+b*b-c*c)*(a*a+b*b-c*c);
        
        if(square(A)==true && square(B)==true && square(C)==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
