/*
��n���м�λ��

n!��λ����log10(n!)+1
�����sum[log10(x)]+1 x=1 to n
Ȼ����forѭ����

�ؼ��ʣ���ѧ�⣬�ɷ���
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,a;
    double t;
    //freopen("aaa.txt","r",stdin);
    cin>>n;

    while(cin>>a)
    {
        t=0;
        for(int i=1;i<=a;i++)
            t+=log10(double(i));
        cout<<int(t)+1<<endl;
    }


    //while(1);  
    return 0;
}

