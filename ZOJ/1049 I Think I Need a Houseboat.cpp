/*
������������꣬���Ҵ�ԭ�㿪ʼ�ʰ�Բ��ÿ�긯ʴ50ƽ��Ӣ��ʶ����긯ʴ����

��ʴ����ʱ����ʴ������ٳ�����ʮ������

�ؼ��ʣ����� 
*/
#include<iostream>
#define pi 3.1415926535897932384626
using namespace std;

int main()
{
    int n;
    double x,y;
    double area;
    int year;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        area=pi*(x*x+y*y)/2;
        year=(area/50)+1;
        cout<<"Property "<<i<<": This property will begin eroding in year "<<year<<"."<<endl;
    }
    cout<<"END OF OUTPUT."<<endl;
    
    return 0;
} 
