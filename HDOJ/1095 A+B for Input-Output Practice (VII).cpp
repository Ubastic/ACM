/*
A+B problem

cin.eof()!!!!!!!!!!!!!!! 

�ؼ��ʣ�����  
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<a+b<<endl;
        if(cin.eof()==false)cout<<endl;
	}
}
