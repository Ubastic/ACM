/*
��1��ʼ��ÿ�˳�2-9��һ������˭�ȳ˵�����n˭��Ӯ�ˣ���Stan��û�б�ʤ�Ĳ���

��д��һ�������ĵݹ��ж�Stan��û�б�ʤ���ԣ������ 
���Ƕ��ڴ��������Գ�ʱ
���������Ǹ������о�ǰ����Է���һЩ���ɣ�
Stan:1-9                     9=2^0 * 9^1
Ollie:10-18                 18=2^1 * 9^1
Stan:19-162                162=2^1 * 9^2
Ollie:163-324              324=2^2 * 9^2
Stan:325-2916             2916=2^2 * 9^3
Ollie:2917-5832           5832=2^3 * 9^3
Stan:5833-52488          52488=2^3 * 9^4
���������Ժ�ֱ����
��ʵ�ú�����ҲӦ��������Ϊʲô����������� 

�ؼ��ʣ��ݹ飬�ҹ��ɣ����㷨 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        n--;
        while(1)
        {
            n/=9;
            if(n==0){cout<<"Stan wins."<<endl;break;}
            n/=2;
            if(n==0){cout<<"Ollie wins."<<endl;break;}
        }
    }
}

/* 
bool f(int present,bool name)
{
    if(n==1)return true;
    if(present>=n)
    {
        if(name==Ollie)return true;
        else return false;
    }
    
    switch(name)
    {
        case Stan:
            for(int i=2;i<=9;i++)
                if(f(present*i,!name)==true)return true;
            return false; 
        case Ollie:
            for(int i=2;i<=9;i++)
                if(f(present*i,!name)==false)return false;
            return true; 
    }
}
*/
