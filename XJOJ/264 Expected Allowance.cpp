/*
�������ӵ���������������n�����ӣ�ÿ����m���棬����ܵ���Ҫ��ȥk��С��1�ĵ�1����

�������������n���������е��������������յ�������times������
times[i]��ʾi��������ж�������Ϸ���
i/m^n����i��ĸ��ʣ��ٳ���(i-k)��1

�ؼ��ʣ����ʣ������������ 
*/
#include<iostream>
#include<cmath>
using namespace std;

int n,m,k;
int times[1000000];

void search(int layer,int total)
{
    if(layer==n){times[total]++;return;}
    
    for(int i=1;i<=m;i++)
        search(layer+1,total+i);
}

int main()
{
    while(cin>>n>>m>>k)
    {
        if(n==0 && m==0 && k==0)break;
        
        memset(times,0,sizeof(times));
        search(0,0);
         
        double p=0;
        double total=pow(m,double(n)); 
        for(int i=n;i<=m*n;i++)
        {
            if(i>k)p+=(i-k)*times[i]/total;
            else p+=times[i]/total;
        }
        printf("%.10f\n",p);
    }
}
