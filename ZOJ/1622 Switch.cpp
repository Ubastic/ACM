/*
�������ƵĿ���״̬������������������������ٸı���

���������101010...��01010...
�ֱ�����������������Ŀ��������ٵ�

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        bool light[10000];
        for(int i=0;i<n;i++)
            cin>>light[i];
            
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(light[i]!=i%2)a++;
            if(light[i]!=(i+1)%2)b++;
        }
        
        if(a>b)cout<<b<<endl;
        else cout<<a<<endl;
    }
}
