/*
��ԭ�⣬�����൱����֪��������������������������ǰ�����

���õݹ飬��֪�ַ����ĳ��ȣ��Ϳ�������м��ַ���λ�ã��Ӷ����ַ����ָ�Ϊ���������֣�����ÿһ����ִ����ͬ����
ִ��ʲô������
��ԭ�ַ������Է�Ϊ�����ַ������м��ַ������ַ�����
�����˳���ǡ��м��ַ������ַ��������ַ�����
����һ��˳��ݹ�Ϳ�����

�ؼ��ʣ����������ݹ飬�ַ��� 
*/
#include<iostream>
#include<string>
using namespace std;

void f(char input[],char result[],int length)
{
    if(length==0)return;
    
    int middle=(1+length)/2;
    result[middle-1]=input[0];
    
    int left_length=middle-1;
    int right_length=length-middle;
    
    f(input+1,result,left_length);
    f(input+middle,result+middle,right_length);
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    char input[2001],result[2001]={0};
    
    char c;
    int i=0;
    while(scanf("%c",&c)!=EOF)
        input[i++]=c;
    
    f(input,result,i);
    cout<<result;
    
    //while(1);
}
