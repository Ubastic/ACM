/*
��n<=500000�����Ӻ�

��ɸ�����500000��ÿ���������Ӻͣ���ֱ�����

�ؼ��ʣ���ѧ��
*/
#include<iostream>
#define SIZE 500000
using namespace std;

int main()
{
    int factor[SIZE+1]={0};
    int x,n;
    
    for(int i=1;i<=SIZE/2;i++)
        for(int j=i*2;j<=SIZE;j+=i)
            factor[j]+=i;              //ɸ����������Ӻ�
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>x;
    while(x--)
    {
        scanf("%d",&n);
        printf("%d\n",factor[n]);   //��cin��cout�ᳬʱ
    }
    
    //while(1);
    return 0;
}

