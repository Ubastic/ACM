/*
�жϵ�k�����5,2,0��ɵ������Ƿ���"520"Ƭ��

��ʵ5,2,0�������Ϊ2,1,0��������k��������ǰ���ת���������Ƽ���
Ȼ���������Ƿ���210�Ӵ�

�ؼ��ʣ�����ת�������㷨������ 
*/
#include<iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
    char digit[10];
    
    int point=0;
    while(k>0)
    {
        digit[point++]=k%3;
        k/=3;
    }
    
    bool judge=false;
    for(int i=0;i<point-2;i++)
        if(digit[i]==0 && digit[i+1]==1 && digit[i+2]==2)judge=true;
        
    if(judge==true)cout<<"yes";
    else cout<<"no";
    
    //while(1);
    return 0;
}
