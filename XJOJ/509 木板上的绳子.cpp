/*
ľ�����������д��ף�����ÿ��m�ź�2m������һ����������n��3n+1����
��N��N+1֮���ж�������

��ͼ�ϻ�һ�£�����ż���ǣ�һ�ӾͿ�����

�ؼ��ʣ�ģ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        
        int even=N-N/2;
        int odd=(N+1)/2-(N+2)/6;
        cout<<even+odd<<endl;
    }
    
    
    //while(1);
}
