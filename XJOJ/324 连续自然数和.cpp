/*
һ��������Ȼ���ĺ͵���������ֵ������Ҫ���С����������н�

��ö�������������Ϊa��β��Ϊb���ܺ�Ϊm
�������͹�ʽ(a+b)(b-a+1)/2=m
��(a+b)(b-a+1)=2m
��forѭ����2m�ֽ�����������pq=2m��p<q 
��a+b=p
b-a+1=q��˷����鼴��

�ؼ��ʣ����� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m;
    int p,q;
    cin>>m;
    
    for(int i=sqrt(2*m);i>1;i--)
    {
        if(2*m%i==0)
        {
            p=2*m/i;
            q=i;
            if((p-q+1)%2==0 && (p+q-1)%2==0)
                cout<<(p-q+1)/2<<' '<<(p+q-1)/2<<endl;
        }
    }

    //while(1);
    return 0; 
}
