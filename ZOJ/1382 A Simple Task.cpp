/*
����n���������n=a*2^p��a��p��aΪ���� 

���г�2^p��������
Ȼ��һ��һ����ö�ٿ��Ƿ����Ҫ��
��������Ψһ�⣬����ֻ���һ���

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int d;
    cin>>d;
    while(d--)
    {
        int n;
        cin>>n;
        
        int binary[100]={1};
        for(int i=0;binary[i]<=1000000;i++)
            binary[i+1]=2*binary[i];
            
        for(int i=0;binary[i]<=n;i++)
            if(n%binary[i]==0 && (n/binary[i])%2==1)
            {
                cout<<n/binary[i]<<' '<<i<<endl;
                break;
            }
    }
}
