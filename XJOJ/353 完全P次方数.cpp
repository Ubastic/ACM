/*
x=b^p����������x������ֵ����һ����Ҫ�����p�����ֵ������bΪ����

��Ϊ2^32Ϊunsigned long���ޣ�����p���ֵΪ32
��32��ʼһ��һ�ο��������Ҽ���
ע��pow��������ֵ��4.9999999ȡ����Ϊ4������Ҫ��������
����x�п���Ϊ��ֵ!!

�ؼ��ʣ���ѧ�� 
*/ 
#include<iostream>
#include<cmath>
using namespace std;

long long pow_int(int b,int p)
{
    int i;
    long long sum=1;
    for(i=0;i<p;i++)
        sum*=b;
    return sum;
}

int main()
{
    int x,n;
    int i,y;
    
    cin>>x;
             
    if(x>0)
    {
        for(i=32;i>0;i--)
        {
            y=(int)(pow((double)x,1.0/i)+0.5);
            if(pow_int(y,i)==x){cout<<i<<endl;break;}
        }//���� 
    }
    else
    {
        x=-x;
        for(i=31;i>0;i-=2)
        {
            y=(int)(pow((double)x,1.0/i)+0.5);
            if(pow_int(y,i)==x){cout<<i<<endl;break;}
        }//���� 
    } 
    //while(1);
    return 0;
}
