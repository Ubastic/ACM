/*
һ��������������һ������Ϊ���ֵ

��S[i]��ʾǰi�������ܺͣ�������S[0]=0��
����ĿҪ����i��j�ĺ�ʹ֮���ΪS[j]-S[i-1](j>i) 
��j��β�����ֵ��S[j]-s[i]������iΪS[0]��S[j-1]�е���Сֵ
����һ��Ϳ�����

��������һ�����򵥵Ķ�̬�滮��������� 
dp[i]��ʾ��i��β�����ֵ����Ŀ��Ҫ��max{dp[i]}
dp[i+1]=max(dp[i],0)+value[i+1] 

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
using namespace std;

int energy[1000001]={0};

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>energy[i];
        energy[i]+=energy[i-1];
    }    
    
    int min=energy[0],max=energy[1]-energy[0];
    for(int i=1;i<=n;i++)
    {
        if(energy[i]-min>max)max=energy[i]-min;
        if(energy[i]<min)min=energy[i];
    }
    
    cout<<max;
    
    //while(1);
}

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int max=0;
    int b=0;
    int energy;
    for(int i=0;i<n;i++)
    {
        cin>>energy;
        if(b>0)b+=energy;
        else b=energy;
        if(b>max)max=b;
    }
    
    cout<<max;
}
*/
