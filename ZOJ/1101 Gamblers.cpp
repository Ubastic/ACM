/*
����n<=1000����������������������Щ�����ҳ������������������ĺ͵�����

����С������ţ���������forѭ������
i��ʾ�ͣ�j,k,l��ʾʣ��������
Ҳ�����ö��ַ������� 

�ؼ��ʣ����� 
*/
#include<iostream>   
#include<algorithm>
using namespace std;

int main()   
{   
    int n;   
    long wager[1000];   
    bool flag;   
    while(cin>>n)
    {   
        if(n==0)return 0;
        
        flag=false;   
        for(int i=0;i<n;i++)cin>>wager[i];
    
        sort(wager,wager+n);  
         
        for(int i=n-1;i>0;i--)
        {   
            for(int j=n-1;j>=2;j--)   
            {   
                if(j==i)continue;   
                for(int k=j-1;k>=1;k--)   
                {   
                    if(k==i)continue;   
                    for(int l=k-1;l>=0;l--)   
                    {   
                        if(l==i)continue;   
                        if(wager[i]==wager[j]+wager[k]+wager[l])
                        {   
                            flag=true;   
                            cout<<wager[i]<<endl;
                            goto END;
                        }   
                    }   
                }   
            }   
        }   
        if(flag==false)cout<<"no solution"<<endl; 
        END:;
    }   
}  
