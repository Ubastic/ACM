/*
����n<3000���������ж������������Ĳ��Ƿ�����Ϊ1��n-1��n-1����

��һ�����飨ɸ�����¸�������n-1���Ȼ���жϴ�1��n-1�Ƿ�ÿ���������ֹ�

�ؼ��ʣ���ѧ
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,n,t,i;
    bool niu[3001];   //ɸ
    
    while(cin>>n)
    {
        t=n;
        memset(niu,false,sizeof(niu));  //ɸ�ĳ�ʼ��
        cin>>a;                         //�������ĵ�һ����
        
        while(--t)
        {
            cin>>b;                     //�������ĺ󼸸�
            niu[abs(b-a)]=true;
            a=b;
        }
        
        for(i=1;i<=n-1;i++)
            if(niu[i]==false)break;     //���Ƿ���δ���ֵĲ�ֵ

        if(i==n)cout<<"Jolly"<<endl;
           else cout<<"Not jolly"<<endl;
    }
return 0;
}
