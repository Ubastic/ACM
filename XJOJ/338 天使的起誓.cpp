/*
����a,b����b%a����ȡֵΪ1~a��b��ֵ����

�߾���ȡģ
�����b���úò���
a��b����˿�ʼ��b������������a������һ�½��ż�
���ʣ�µľ���������

�ؼ��ʣ��߾��� 
*/
#include<iostream>
#include<string>
using namespace std;

void minus_d(string &dividend,string &divisor)
{
    int start=divisor.length()-1;
    if(dividend[0]<=divisor[0])start++;
    
    for(int i=divisor.length()-1;i>=0;i--,start--)
    {
        dividend[start]-=divisor[i]-'0';//�� 
        
        if(dividend[start]<'0')
        {
            dividend[start]+=10;
            dividend[start-1]--;//��λ 
        }
    }
}

bool compare(string a,string b)
{
    if(a.length()>b.length())return true;
    else if(a.length()<b.length())return false;
    else return a>b;
}

int main()
{
    int i;
    string divisor;//���� 
    string dividend;//������ 
    cin>>divisor>>dividend;
    
    while(compare(dividend,divisor)==true)
    {
        minus_d(dividend,divisor);
        while(dividend[0]=='0')dividend.erase(0,1);
    }

    cout<<dividend;
    
    //while(1);
    return 0;
}
