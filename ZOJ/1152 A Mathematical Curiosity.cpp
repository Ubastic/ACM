/*
����n,m����ʹ(a^2+b^2+m)/(a*b)Ϊ������0<a<b<n��a,b����

���

�ؼ��ʣ���ѧ����ٷ�
*/
#include<iostream>
using namespace std;

int main()
{
    int blocks,count,cases,n,m,a,b;
      
    cin>>blocks;
    while(blocks--)
    {   
        cases=0;
        
        while(cin>>n>>m)
        {
            if(n==0)break;
            
            count=0;
            
            for(b=2;b<n;b++)
                for(a=1;a<b;a++)
                    if((a*a+b*b+m)%(a*b)==0)count++;
                    
            cout<<"Case "<<++cases<<": "<<count<<endl;
        }
        if(blocks>0)cout<<endl;
    }
    
    return 0;
}

