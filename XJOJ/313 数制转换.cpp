/*
ת��3���Ƶ����⣬����Ȩֵ����0,1,2����-1,0,1

������һЩ���ӣ���012�����������ԭ��һ����ȡģ��������ͬ��
012����xȡģ�õ�0~x-1��ֵ
-01����xȡģ�õ�������-x/2~x/2��ֵ 
012�������ǿ�����ȡ��
-01��������Զ����ȡ�� 
-10=-0- -101
-9=-00  -100
-8=-01  -22
-7=-1-  -21
-6=-10  -20
-5=-11  -12
-4=--   -11
-3=-0   -10
-2=-1   -2
-1=-    -1
0=0     0
1=1     1
2=1-    2
3=10    10
4=11    11
5=1--   12
6=1-0   20
7=1-1   21
8=10-   22
9=100   100
10=101  101

�ؼ��ʣ�ת������ 
*/
#include<iostream>
using namespace std;

int mod(int a,int m)
{
    int t=a%m;
    if(t>m/2)t-=m;
    if(t<-m/2)t+=m;
    return t;
}//ȡģ���õ�����ֵ������mһ���ģ 

int divide(int a,int b)
{
    double t=double(a)/double(b);
    if(t>0)return int(t+0.5);
    else if(t<0)return int(t-0.5);
}//������������Զ����ķ���ȡ�� 


int main()
{
    int n,point;
    char result[50];
    
    while(cin>>n)
    {
        if(n==0){cout<<0<<endl;continue;}
        
        point=0;
        while(n!=0)
        {
            result[point++]=mod(n,3);
            n=divide(n,3);
        }
        
        for(int i=point-1;i>=0;i--)
            switch(result[i])
            {
                case -1:cout<<'-';break;
                case 0:cout<<'0';break;
                case 1:cout<<'1';break;
            }
        cout<<endl;
    }
    return 0;
}
