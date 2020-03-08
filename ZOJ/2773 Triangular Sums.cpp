/*
T(n)=sum(x=1...n;x)
W(n)=sum(x=1...n;x*T(x+1))��W(n<=300)

���庯����ֱ�ӵ������
����ֱ����ͨ�ʽ��W(n)=(n^4+6*n^3+11*n^2+6*n)/8 

�ؼ��ʣ�����
*/
#include<iostream>
using namespace std;
int main()
{
    int T(int);
    int W(int);
    
    int n,t=0;

    cin>>n;
    while(cin>>n)
    {
        cout<<++t<<" "<<n<<" "<<W(n)<<endl;
    }

    return 0;
}

int T(int n)
{
    return n*(n+1)/2;
}

int W(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i*T(i+1);
    return sum;
}
