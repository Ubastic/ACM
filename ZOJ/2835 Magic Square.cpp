/*
���뷽���ж����ǲ��ǻ÷����÷���������Ԫ�ز��ظ������жԽ��ߺ����

�Ͱ�������Ϳ�����

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        int square[10][10];
        int sum=0;
        bool judge[1001]={0};
        bool b=true;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>square[i][j];
                sum+=square[i][j];
                
                if(judge[square[i][j]]==false)
                    judge[square[i][j]]=true;
                else b=false;
            }
        sum/=n;
        
        for(int i=0;i<n;i++)
        {
            int t1=0,t2=0;
            for(int j=0;j<n;j++)
            {
                t1+=square[i][j];
                t2+=square[j][i];
            }
            if(t1!=sum || t2!=sum)b=false;
        }
        
        int t1=0,t2=0;
        for(int i=0;i<n;i++)
        {
            t1+=square[i][i];
            t2+=square[i][n-i-1];
        }
        if(t1!=sum || t2!=sum)b=false;
        
        if(b==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
