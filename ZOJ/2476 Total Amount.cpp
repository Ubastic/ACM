/*
����0<N<=10000��Ǯ����ÿһ����$0.00��$20,000,000.00֮�䣬�����ЩǮ�ĺ�

�������ݣ��߾��ȼӷ����ٰ���ʽ�������
�����ʽ�Ƚ��鷳 

�ؼ��ʣ��߾��ȼ��㣬���� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,sum,t,k,i,count;
    char p[15],q[15],temp[5];

    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n)
    {
        if(n==0)return 0;
        sum=0;
        for(;n>0;n--)
        {
            t=0;
            k=1;
            cin>>p;//read $1,234,567.89
            for(int i=strlen(p);i>0;i--)
            {
                if(p[i]>='0'&&p[i]<='9'){t+=(p[i]-'0')*k;k*=10;}//translate as t=123456789
            }
            sum+=t;
            
        }
        
        count=0;
        for(i=0;i<15;i++)
        {
             if(i==2){q[i]='.';continue;}
             if(i%4==2){q[i]=',';continue;}
             q[i]=sum%10+'0';
             sum/=10;
             count++;//in case of sum<100
             if(sum==0&&count>2){q[i+1]='\0';break;}  
        }
        
        cout<<'$';
        for(;i>=0;i--)
            cout<<q[i];
        cout<<endl;    
    }
    
}

