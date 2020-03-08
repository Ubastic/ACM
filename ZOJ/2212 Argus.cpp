/*
��������Ĵ��ź����е�ʱ��������ʱ��˳�����ǰn�����е��������
ʱ����ͬ���ô�������

���ȶ���
ÿ������һ�����񡱣��Ͳ���һ��������ʱ���Ǹղ��������ʱ����

�ؼ��ʣ����ȶ��У�STL 
*/
#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Query
{
    int ID;
    int period;
    int sum;
    bool operator <(const Query &a)const
    {
        if(a.sum!=sum)return sum>a.sum;
        else return ID>a.ID;
    }
};

int main()
{
    priority_queue<Query> pqueue;
    
    string s;
    while(cin>>s)
    {
        if(s=="#")break;
        
        Query temp;
        cin>>temp.ID>>temp.period;
        temp.sum=temp.period;
        pqueue.push(temp);
    }
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Query temp=pqueue.top();
        pqueue.pop();
        cout<<temp.ID<<endl;
        
        temp.sum+=temp.period;
        pqueue.push(temp);
    }
    
    //while(1); 
}

