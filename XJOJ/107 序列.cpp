/*
һ������ÿ�ΰ�����������Ϊ�ϴ���Ǹ���������Ϊ�ϴ���Ǹ���ֵ������������ֻʣһ��Ԫ�ص���С����

̰�ģ�ÿ�κϲ��ҵ���������������������ϲ���
�ҵ�i,����a[i-1]>=a[i]<=a[i+1]
if a[i-1]<a[i+1] �ϲ�a[i-1]��a[i],����ϲ�a[i]��a[i+1]
ѭ��n-1�μ��ɴﵽĿ�ꡣ
Ϊ�˸������ʵ�֣����������˼��ϡ����޴󡱵�������
��ջ��˼��ʵ�֣�����ܼ�࣬����˼��

�ؼ��ʣ�̰�ģ����㷨����˼�� 
*/
#include<iostream>
#include<vector>
#define MAX_N 1000000
#define INF 1000000001
using namespace std;

int n,a[MAX_N+2];
vector<int> stack;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
       
    a[0]=a[n+1]=INF;
   
    long long result=0;
   
    stack.push_back(a[0]);
    for(int i=1;i<=n+1;i++)
    {
        while(a[i]>=stack.back())
        {
            int change=min(stack[stack.size()-2],a[i]);
            if(change==INF)break;
            result+=change;
            stack.pop_back();
        }
        stack.push_back(a[i]);
    }
    cout<<result<<endl;
   
    return 0;
}
