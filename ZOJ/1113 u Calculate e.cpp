/*
���ݹ�ʽe=sum(0!+1!+2!+...+n!)����Ȼ����ֵ��ÿһ�����n����һ���ľ�ȷֵ��n<10 

���淽������ʽ������Ͻ���Ҫע��

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    cout<<"n e"<<endl;
    cout<<"- -----------"<<endl;
    cout<<"0 1"<<endl;
    cout<<"1 2"<<endl;
    cout<<"2 2.5"<<endl;
    
    double sum=2.5,temp=0.5;
    
    for(int i=3;i<10;i++)
    {
        sum+=temp/=i;
        printf("%d %.9lf\n",i,sum);
    }
    
    return 0;
}
