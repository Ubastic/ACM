/*
����Ǯ����A,B��ֵ��ÿ�μ�A��B���������Ǯ���ܷ�����

��256,88,5,9Ϊ������ֵΪ168
5��9����С������Ϊ45����ʾ45ֻ����5��9��9��5��ɣ� 
���԰�168���Էֳ�45+45+45+33
����33����������ֻ��һ����ϣ���֤���ˣ�33=3*5+2*9
ǰ�������45������3+1=4����ϣ�����5��һ��9������9������9�� 
���ս��:
168=17*9+3*5;
168=12*9+12*5;
168=7*9+21*5;
168=2*9+30*5;
ÿһ����������ΪC(a+b,a)�������һ����C(21,3)

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int C(int a,int b)
{
    if(a<b)return C(b,a);
    if(b>a/2)return C(a,a-b);
    
    if(a==0 || b==0)return 1;
    else return C(a-1,b-1)+C(a-1,b);
}

int gcd(int a,int b)
{
    if(a<b)return gcd(b,a);
    
    if(a%b==0)return b;
    else return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int W1,Z,A,B;
    cin>>W1>>Z>>A>>B;
    
    int dw=W1-Z;//Ǯ�Ĳ�ֵ 
    int g=lcm(A,B);//��С������ 
    
    int cA=0,cB=0,f=dw%g;//f��Ǯ������ 

    while(f>0)
    {
        if(f%B==0){cB=f/B;break;}
        else {cA++;f-=A;}
    }

    if(f<0){cout<<0<<endl;return 0;}
    
    int sum=0;
    for(int i=0;i<=dw/g;i++)
    {
        int a=i*g/A+cA;
        int b=(dw/g-i)*g/B+cB;
        sum+=C(a+b,b);
    }
    
    cout<<sum;
    //while(1);
}
