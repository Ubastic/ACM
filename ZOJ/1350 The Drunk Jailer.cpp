/*
��n�η�����ǹ��ŵģ��������Ȱ�1�ı����ŷ�ת��ȫ���򿪣����ٰ�2�ı����ŷ�ת���Դ�����ֱ��n��������м����η��ǿ��ŵ�

��bool����ֱ��ģ��Ϳ����ˣ��е���ɸ��

�ؼ��ʣ����⣬ģ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        bool cell[101]={false};
        for(int i=1;i<=n;i++)
            for(int j=i;j<=n;j+=i)
                cell[j]=!cell[j];
                
        int prisoner=0;
        for(int i=1;i<=n;i++)
            if(cell[i]==true)prisoner++;
            
        cout<<prisoner<<endl;
    }
} 
