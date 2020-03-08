/*
��x��0.000��2.000ʱ���2001��fai(x)=sum[1/(k*(k+x))]��ֵ,k��1��������
��ȷ��С�����ʮ��λ

fai(1)=sum[1/(k*(k+1))]=sum[1/k-1/(k+1)]=1
fai(x)-fai(1)=sum[1/(k*(k+x))-1/(k*(k+1))]=(1-x)*sum[1/(k*(k+x)*(k+1))]
����fai(x)-fai(1)��ǰMAX������͹�ʽ�ۼӣ�������������΢���֣�
sum[1/(k*(k+x)*(k+1))]<inf[1/k^3]=1/(2*MAX*MAX)      k=MAX to ������ 

�ؼ��ʣ���ѧ
*/
#include <iostream>
#define MAX 10000                         //kΪ1��MAX�õ����㣬MAX�Ժ���΢���ּ��㣬����С
using namespace std;

int main( )
{
    double sum;
  
    for (double x=0;x<=2.000;x+=0.001)   //2001��x��ֵ 
    {
        sum=0;
        
        for(int k=1;k<MAX;k++)               
            sum+=1/(k*(k+1)*(k+x));      //���sum[1/(k*(k+x)*(k+1))]   k=1 to MAX 
            
        sum*=1-x;                        //���fai(x)-fai(1)            k=1 to MAX
        sum+=(1-x)/(2*MAX*MAX)+1;        //����MAX�Ժ�����΢���ּ��㣩���ټ�fai(1)            
                                       
        printf("%5.3f %16.12f\n",x,sum);
    }

    return 0;
} 
