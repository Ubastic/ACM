/*
n�������⽻��ϵΪһ�����������������ǵ����꣬Ҫ�󿪻�ʱ�����ߵ�·��һ�����󿪻������

����һ�ѵ㣬������������е��������
ע�����һ����͵�һ����ҲҪ��

�ؼ��ʣ����� 
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        double x[1000];
        double y[1000];
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
            
        double xx,yy;
        cout<<n<<" ";
        cout.precision(6);
        for(int i=0;i<n-1;i++)
        {
            xx=(x[i]+x[i+1])/2;
            yy=(y[i]+y[i+1])/2;
            cout<<fixed<<xx<<" "<<fixed<<yy<<" ";
        }
        xx=(x[n-1]+x[0])/2;
        yy=(y[n-1]+y[0])/2;
        cout<<fixed<<xx<<" "<<fixed<<yy<<endl;
    }
}
