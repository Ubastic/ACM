/*
����һ�������ҳ��м���ֵ���ظ���

�����飨ɸ�����¸���ֵ���ֵĴ��������ҳ��м����Ǵ���һ��

�ؼ��ʣ�����
*/
#include<iostream>
using namespace std;

int main()
{
    int n,m,a,count;
    int niu[10000];
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n>>m)
    {
        if(n==0)break;
        for(int i=0;i<10000;i++)niu[i]=0;
        count=0;
        
        while(m--)
        {
            cin>>a;
            niu[a]++;
        }
        for(int i=1;i<=n;i++)
            if(niu[i]>1)count++;
        cout<<count<<endl;
    }
    
    //while(1);
    return 0;
}
