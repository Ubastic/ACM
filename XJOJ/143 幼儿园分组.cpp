/*
�����׶�԰С���ѵĺ������б������Ƿֳ����飬Ҫ��ÿ���˶�������һ������������һ����
�������һ��

ֱ�ӹ���Ϳ��ԣ��ø�set������һ�������
Ȼ��ӵ�һ��С���ѿ�ʼ�������ڲ�����һ����
���ڵĻ������������ǲ��Ƕ�������һ����
��������ھ��������һ�����ѹ�ȥ
�Ϳ�����

�ؼ��ʣ�ģ�⣬STL 
*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    set<int> group;
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        vector<int> friends;
        int k;
        while(cin>>k && k>0)
            friends.push_back(k);
            
        if(group.find(i)==group.end())
        {
            for(int j=0;j<friends.size();j++)
                if(group.find(friends[j])!=group.end())
                    goto end;
            
            group.insert(friends[0]);
        }
        end:;
    }

    cout<<group.size()<<endl;
    set<int>::iterator it=group.begin();
    cout<<*it;
    for(it++;it!=group.end();it++)
        cout<<' '<<*it;
        
    //while(1);
}
