/*
1Ӣ�߳���һ�����Ӵ�nӢ����ľ�����������ÿ������uӢ����һ�����»�dӢ�ߣ�n<100,u>d�����ö೤ʱ������

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    int n,u,d; 
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n>>u>>d)
    {
        if(n==0)break;
        
        if((n-u)%(u-d)==0)cout<<2*(n-u)/(u-d)+1<<endl;
        else cout<<2*int((n-u)/(u-d)+1)+1<<endl;
    }
    
    
    
    
    //while(1);
    return 0;
}

