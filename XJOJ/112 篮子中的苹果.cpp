/*
��n�����ӣ�����װ�в�ͬ������ƻ�������ó�һЩ����ȥ��һЩ���ӣ������������ˮ����
��֤ÿ���������ˮ��������ͬ��������������ж��ٸ�ƻ�� 

��ƻ����������С�ź�
����Ϊ���ӱ��1��n
����Ϊ���������ƻ����
��ʱͼ��Ϊ�����ݼ�
ȡͼ����һ�㣬ȥ������������Ĳ��֣���ʾ�����е�һ�β���
��ȥ������������Ĳ��֣���ʾ�ڶ��β���
���ʣ�µľ��ξ���ʣ���ƻ��������ÿ�������
���������ҵ���������

�ؼ��ʣ����㷨������ 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int apple[50];
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>apple[i];
    
    sort(apple,apple+n);
    
    int max=0,count;
    for(int i=0;i<n;i++)
    {
        count=apple[i]*(n-i);
        if(count>max)max=count;
    }
    
    cout<<max;
    
    //while(1);
    return 0;
}
