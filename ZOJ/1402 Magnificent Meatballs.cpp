/*
��һ���ֽ���ʹ�������ڷֽ�����ߵĺ͵����ұߵ�

�ȶ������ݣ�ͬʱ�������Ԫ���ܺ�
Ȼ�������ǰi��ĺ�С�ڵ���sum/2
����ж�ǰi����Ƿ����sum/2
ע�����������������ֱ�ӾͲ����ܣ���������

�ؼ��ʣ�ģ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        int guest[30],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>guest[i];
            sum+=guest[i];
        }
        
        int left=0,i;
        for(i=0;left<sum/2;i++)
            left+=guest[i];
        
        if(left==sum/2.0)//ע����2.0 
            cout<<"Sam stops at position "<<i<<" and Ella stops at position "<<i+1<<"."<<endl;
        else cout<<"No equal partitioning."<<endl;
    }
}
