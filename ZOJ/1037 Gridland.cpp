/*
����a*b�ĵ���Ҫ������̵�·�߾�������ÿһ�㣬������б�ߣ�������·��

��a*bΪż������������һ��Ϊż�����������꼴�ɣ�������б�ߣ���֤������·�̼�Ϊa*b
��a*bΪ��������ÿһ�߶����������㣬������һ��б�ߣ��������·��Ϊa*b+sqrt(2)

�ؼ��ʣ��ɷ���
*/
#include<iostream>
#include<cmath>
#include<iomanip>   //���ڿ����������
using namespace std;

int main()
{
    int n,i,a,b;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        cout<<"Scenario #"<<i<<":"<<endl;
        if((a*b)%2==0)
            cout<<fixed<<setprecision(2)<<double(a*b)<<endl;                //����������С�������λ
        else
            cout<<fixed<<setprecision(2)<<double(a*b+sqrt(2.0)-1)<<endl;
        cout<<endl; 
    }

    return 0;
}
  
