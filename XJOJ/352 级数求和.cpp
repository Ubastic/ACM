/*
�󲻴�����������sum(1/x) x strat from 2���������

ֱ����,������� 

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    double s,i,n;
    
    cin>>n;
    
    for(s=0,i=1;s<=n;i++)
        s+=1/i;

    cout<<i-1<<endl;
    
    return 0;
}
