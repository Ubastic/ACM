/*
����N<=1000000������������һ�������ٳ�����N/2�Σ������

����ֱ�Ӷ��룬�ٿ��ţ�����м��Ǹ�Ԫ��
�������Ը��Ӷ��㷨����Ϊ��һ����������һ������ϣ�����ÿ������������ͬ�ģ����ʣ�µĿ϶�����Ŀ��������
�������
���Ҫ����С�������λ
ʱ�俨�ĺ��� 

�ؼ��ʣ����뷨�����㷨 
*/
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
    double temp;
    int count=0;
    
    for(int i=0;i<N;i++)
    {
        double d;
        scanf("%lf",&d);
        
        if(count==0)
        {
            temp=d;
            count++;
        }
        else
        {
            if(d==temp)count++;
            else count--;
        }
    }
    printf("%.2lf",temp);
}
