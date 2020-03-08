/*
��С��K����λ����һ����С��ʮ����������M�ı���

���������������������ֵ�λ��������Ǹ�λ�Ǽ�
ÿ�ΰ�ԭ�������ֳ���ʮ�ټ����µĸ�λ����������Ҳ��ԭ������������ʮ�ټӸ�λ
���ǻ�Ҫ��һЩ�Ż�����ΪM<1000�������������ᳬ��һǧ�����еĳ���Ҳ���ᳬ��һǧ
��¼�³��ֹ�������������Ժ�������ͬ����������ֱ�������������

�ؼ��ʣ������������ 
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct State
{
    vector<int> data;
    int mod;
    State(int i,int m)
    {
        data.push_back(i);
        mod=m;
    }
    void output()
    {
        for(int i=0;i<data.size();i++)
            cout<<data[i];
    }
};

int main()
{
    int K,M;
    cin>>K>>M;
    
    bool flag[1001]={false};
    
    queue<State> q;
    for(int i=1;i<K;i++)
    {
        State s(i,i%M);
        if(s.mod==0)
        {
            s.output();
            return 0;
        }
        else if(flag[s.mod]==false)
        {
            q.push(s);
            flag[s.mod]=true;
        }
    }
        
    while(q.size()>0)
    {
        for(int i=0;i<K;i++)
        {
            State s=q.front();
            s.data.push_back(i);
            s.mod=(s.mod*10+i)%M;
            
            if(s.mod==0)
            {
                for(int i=0;i<s.data.size();i++)
                    cout<<s.data[i];
                return 0;
            }
            else if(flag[s.mod]==false)
            {
                q.push(s);
                flag[s.mod]=true;
            }
        }
        q.pop();
    }
}
