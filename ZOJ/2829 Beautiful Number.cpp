/*
����һ������Ϊ3��5�ı�������3,5������С�������У���������n<=100000�����ֵ

��������洢�����У���ֱ�����

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    int n=0;
    int niu[100000];
      
    for(int i=3;n<100000;i++)
        if(i%3==0||i%5==0)niu[n++]=i;   //��������
        
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n)
    {
        cout<<niu[n-1]<<endl;
    }
    
    //while(1);
    return 0;
}
