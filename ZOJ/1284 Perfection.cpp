/*
�ж�һ���������Ӻ�������Ĵ�С��ϵ�������ʽҪע��

ֱ������İ취��һ���������Ӻ;�����
Ҳ�����������ɸ����ע��n=1

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>num)
    {
        if(num==0)break;
        
        int result=0;
        for(int i=1;i<=num/2;i++)
            if(num%i==0)result+=i; 

        if(result<num)cout<<setw(5)<<num<<"  DEFICIENT"<<endl;
        else if(result>num)cout<<setw(5)<<num<<"  ABUNDANT"<<endl;
        else if(result==num)cout<<setw(5)<<num<<"  PERFECT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
}
