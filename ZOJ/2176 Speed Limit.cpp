/*
������������ʱ����ٶȣ�����ʻ·��

�����ÿ���ٶȵ������˶೤ʱ�䣬����˺����

�ؼ��ʣ�����
*/
#include<iostream>
using namespace std;

int main()
{
   
    int sum,n,s,t,x;
   
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n)
    {
        if(n==-1)break;
        sum=0;x=0;
        
        while(n--)
        {
            cin>>s>>t;
            
            sum+=s*(t-x);   //t-x��ʱ���
            x=t;
        }
        cout<<sum<<" miles"<<endl;
    }
   
    //while(1);
    return 0;
}

