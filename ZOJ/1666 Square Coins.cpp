/*
����ֵΪƽ������17��Ӳ�ң���1��289������һ���������ж����ַ���������Ӳ�Ҵճ������

����һ���ݹ麯��search(a,b)
��������ֵ��С��b^2��Ӳ�Ҵճ�a�����

�ؼ��ʣ��ݹ�֮��^10 
*/
#include<iostream> 
using namespace std; 

int r;//ͳ�ƽ�ĸ��� 

void search(int x,int num)
{ 
    if(x==0){r++;return;} 
    if(num*num>x)return;
    
    for(int i=num;i*i<=x && i<=17;i++)
        search(x-i*i,i);
} 

int main()
{ 
    int n;
    
    //freopen("aaa.txt","r",stdin);
    
    while (cin>>n)
    { 
        if(n==0)break; 
        
        r=0; 
        search(n,1); 
        cout<<r<<endl; 
    } 
    
    //while(1);
    return 0; 
}
