/*
��n<=100000�����Ӻ�

��ɸ�����100000��ÿ���������Ӻͣ���ֱ�����
���⽫��������Ҳ��Ϊ���������� 

�ؼ��ʣ���ѧ��
*/
#include<iostream>
#define SIZE 100000
using namespace std;

int main()
{
    int factor[SIZE+1]={0};
    int t,n;
    
    for(int i=1;i<=SIZE;i++)
        for(int j=i;j<=SIZE;j+=i)
            factor[j]+=i;              //ɸ����������Ӻ�
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",factor[n]);   //��cin��cout�ᳬʱ
    }
    
    //while(1);
    return 0;
}

