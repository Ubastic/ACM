/*
输入n，输出结果末尾是987654321的n位数的平方的个数

先枚举出9位数以内符合条件的结果，是以下八个： 
111111111
119357639
380642361
388888889
611111111
619357639
880642361
888888889
因为大于九位的数只有后九位决定它的平方的后九位值，所以当n大于九时，
结果就是8*(90....0)  n-9个零

关键词：巧算法，简单题 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n<9)cout<<0;
    else if(n==9)cout<<8;
    else if(n>9)
    {
        printf("72");
        for(int i=0;i<n-10;i++)
            printf("0");
    }
    //while(1);
    return 0;
} 
