/*
������ණ���ļ۸������򳬹����������������һ����Ǯ����������ʡ����Ǯ

�����м�Ǯ�Ӵ�С�ţ�������������
����ʡ���ǵ�3,6,9...�������

�ؼ��ʣ����⣬̰�� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int money[20000];
        for(int i=0;i<n;i++)
            cin>>money[i];
        
        sort(money,money+n,greater<int>());
        int discount=0;
        for(int i=2;i<n;i+=3)
            discount+=money[i];
            
        cout<<discount<<endl;
    }
}
