/*
��ͬ���������һ�Ѹ߶Ȳ��ȵ����ӣ�������Ų���ο���ʹ���Ǹ߶ȶ����

����������������������������ո߶ȣ��ٽ�ԭ���������и߳����ո߶ȵĲ��ּ��������ǽ��

�ؼ��ʣ�����
*/
#include<iostream>
using namespace std;

int main()
{
    int n,t,sum,result,count=1;
    int hi[50];
   
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n,n!=0)   //��ȡ�������ӵĸ���
    {
        result=0;
        sum=0;t=n;
        
        while(t--)      //��ȡÿ�����ӵĸ߶�
        {
            cin>>hi[t];
            sum+=hi[t];
        }
        
        sum/=n;       //���ƽ���߶�
        for(int i=0;i<n;i++)
        {
            if(hi[i]>sum)result+=hi[i]-sum;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",count++,result);
    }
    
    //while(1);
    return 0;
}

