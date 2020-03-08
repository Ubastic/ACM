/*
����һ��ʮ������n(0<n<50000)���ж�����2��16����ʱ��Щ�ǻ�������

�ֱ��nת����a(2<=a<=16)���ƣ����жϸý����Ƿ���ġ�

�ؼ��ʣ�����ת�����߾���
*/
#include<iostream>
using namespace std;

int main()
{
    int answer[32],temp,n,k,judge_2;
    bool basis[17],judge;
   
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n)
    {
        if(n==0)break;
        for(int i=2;i<=16;i++)
            basis[i]=true;
        for(int i=2;i<=16;i++)
        {
            temp=n;
            for(k=0;temp>0;k++)
            {
                answer[k]=temp%i;
                temp/=i;
            }
            k--;
            for(int j=k;j>k/2;j--)
            {
                if(answer[j]!=answer[k-j])basis[i]=false;
            }
        }
        
        judge=0;judge_2=0;
        for(int i=2;i<=16;i++)
            if(basis[i]==true){judge=true;judge_2=i;}
        if(judge==false){cout<<"Number "<<n<<" is not a palindrom"<<endl;continue;}
        
        cout<<"Number "<<n<<" is palindrom in basis";
        for(int i=2;i<=16;i++)
        {
            if(basis[i]==true)cout<<" "<<i;
        }
        cout<<endl;
    }
    
    return 0;
}

