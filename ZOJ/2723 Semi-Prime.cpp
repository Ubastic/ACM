/*
�ж�һ�����Ƿ�Ϊ���������ĳ˻�(semi-prime)

һ����nΪsemi-prime�ĳ�Ҫ����������2��sqrt(n)��ֻ��һ������

�ؼ��ʣ���ѧ��
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i,d;
    
    while(cin>>n)
     {
         d=0;
         
         for(i=2;i*i<=n;i++)
             if(n%i==0)d++;    //��n��2��sqrt(n)���м�������
     
         if(d==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
     }
     return 0;
}


