/*
��һ�������Ӹ�λ��ʼһλһλ���������룬����23456:23460-23500-24000-20000

�õݹ�������ĸ�λ���֣�����ȫ�ֱ������µݹ��˼��Σ������ֺ�Ҫ��������

�ؼ��ʣ��ݹ�
*/
#include<iostream>
using namespace std;

int k;    //��¼0�ĸ���

int main()
{
    
    int n;
    int niu(int);
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>n;
    while(cin>>n)
    {
        k=0;         
        cout<<niu(n);
        for(int i=0;i<k;i++)cout<<'0';
        cout<<endl;
    }
    
    //while(1);
    return 0;
}

int niu(int n)  //�ݹ麯��
{
    if(n<10)return n;
    int i;
    i=n%10;
    if(i>4)n+=10-i;
        else n-=i;
    n/=10;
    k++;            //����һ�ζ��ӡһ����
    return niu(n);
}
