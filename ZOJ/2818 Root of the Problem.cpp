/*
����B��N����A^N=B����ӽ�������A

�����N�θ�����B���ٱȽ������������������ĸ����ӽ�

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    double b,n;
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>b>>n)
    {
        if(b==0)break;
        
        a=pow(b,1/n);   //b��1/n�η�
        
        if(pow(a+1,n)-b>b-pow(a,n))cout<<a<<endl;
                              else cout<<a+1<<endl;
    }
   
    //while(1);
    return 0;
}

