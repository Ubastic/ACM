/*
ͷ�Σ�����Ӣ��Ŀ�������������һ������a[1]=1,a[2]=1+1+2,a[3]=1+1+2+1+2+3=a[2]+sum(3)

�򵥣�ֱ��Ԥ��1000�ڵĽ��Ȼ�����

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int result[1000]={0};
    int sum=0;
    for(int i=1;i<1000;i++)
    {
        sum+=i;
        result[i]=result[i-1]+sum;
    }
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<i<<": "<<n<<" "<<result[n]<<endl;
    }
    
    //while(1);
}
