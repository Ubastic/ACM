/*
����n�����sum[0.5/x] x=1 to n

�����ʽ����

�ؼ��ʣ�����
*/
#include <iostream>
using namespace std;

int main()
{
    int n,i,m,t;
    double sum;
 
    cout<<"# Cards  Overhang\n";
 
    while(cin>>n)
    {
        sum=0;
        
        for(i=1;i<=n;i++)
            sum+=0.5/i;
   
        printf("%5d     %.3f\n",n,sum);
    }

    return 0;
}
