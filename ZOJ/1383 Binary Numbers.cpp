/*
����ʮ���Ƶ�����������������Ʊ�ʾ����1��λ��

ע�����ÿ������λ�ò��ܸ��ո�

�ؼ��ʣ����⣬����ת�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int d;
    cin>>d;
    
    while(d--)
    {
        int n;
        cin>>n;
        
        int i;
        for(i=0;n>1;i++)
        {
            if(n%2==1)cout<<i<<" ";
            n/=2;
        }
        cout<<i<<endl;
    }
    
    //while(1);
}
