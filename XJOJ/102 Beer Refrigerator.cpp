/*
����һ��������������һ�鳤��ߣ�ʹ�������С

�������Сʱ�䳤Ϊ��������������Դ�0���������������һ����
��ѭ���ڱ�����һ���ߣ����±������С��һ��⼴��

�ؼ��ʣ�ö�٣�����
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,v,min=1000000000;
    cin>>v;
    int t=(pow(v,1/3.0))+1;
    
    for(int i=t;i>0;i--)
    {
        if(v%i==0)
        {
            int j;
            for(j=sqrt(v/i);j>0;j--)
                if((v/i)%j==0)break;

            if(i*j+v/i+v/j<min)
            {
                min=i*j+v/i+v/j;
                a=i;b=j;c=v/i/j;
            }
        }
    }
    cout<<a<<' '<<b<<' '<<c;
    
    //while(1);
    return 0;
}
