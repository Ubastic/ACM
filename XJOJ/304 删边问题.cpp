/*
����һ����ͨ����ͼ��������ɾ����������ʹ���ͼ��Ȼ��ͨ

N���ڵ����ͨͼ������N-1����
����ֱ�����M-(N-1)������ 

�ؼ��ʣ�ͼ�ۣ����㷨������ 
*/
#include<iostream>
using namespace std;

int main()
{
    int N,M;
    while(cin>>N>>M)
    {
        int a,b;
        for(int i=0;i<M;i++)
            cin>>a>>b;
            
        cout<<M-N+1<<endl;
    }
}
