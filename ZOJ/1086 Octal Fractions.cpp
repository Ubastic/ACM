/*
������İ˽���С��ת��Ϊʮ����С�����

��0.7543[8]=7/8+5/8^2+4/8^3+3/8^4=(7+(5+(4+3/8)/8)/8)/8
�Ƚ��˽���С����λ������飬����ѭ�������һλ��ʼ���԰ˣ��ټ�ǰһλ���ٳ��԰ˡ�����
���԰˵Ĳ���Ҫ�ø߾���

�ؼ��ʣ��߾��ȣ�����ת��
*/
#include<iostream>
#include<string>
using namespace std; 

int main()
{ 
    char number[100];
    int answer[300],len,lenth;
    int divide_8(int *,int);

    while(cin>>number)
    {
        len=strlen(number);
        
        for(int i=0;i<300;i++)
            answer[i]=0;
            
        lenth=1;
        for(int i=len-1;i>1;i--)
        {
            answer[0]=number[i]-'0';
            lenth=divide_8(answer,lenth);            
        }
        
        cout<<number<<" [8] = 0.";
        for(int i=1;i<lenth;i++)
            cout<<answer[i];
        cout<<" [10]"<<endl;
    }

    return 0; 
} 

int divide_8(int *answer,int lenth)
{
    int i;
    for(i=0;i<lenth;i++)
    {
        answer[i+1]+=answer[i]%8*10;
        answer[i]/=8;
    }
    while(answer[i])
    {
        answer[i+1]+=answer[i]%8*10;
        answer[i]/=8;
        i++;
    }
    return i;
}
