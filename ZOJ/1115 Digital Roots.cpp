/*
����������������λ���������õ���������˷���ֱ������Ϊһλ��

û��˵

�ؼ��ʣ��߾��ȣ��ݹ�
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int add(int);
    int add_1(char *);
    
    char p[1000];
    
    //freopen("aaa.txt","r",stdin);
  
    while(cin>>p)
    {
        if(p[0]=='0'){return 0;}
        cout<<add_1(p)<<endl;
    }    


}


int add(int n)
{   
    int sum=0; 
    for(;n>0;n/=10)
        sum+=n%10;
    if(sum<10)return sum;
        else return add(sum);
}

int add_1(char p[])
{   
    int sum=0; 
    
    for(int i=0;i<strlen(p);i++)
        sum+=p[i]-'0';
        
    return add(sum);
}
