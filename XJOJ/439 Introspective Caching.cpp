/*
�������ٻ���cache������c���������ݵ�����n���Լ�δ����Ҫ��ȡ��a������
�տ�ʼ��ʱ��cache�ǿյģ��ӻ����ȡ���ݲ�Ҫʱ�䣬���Ҫ�������ݻ�����û�У����һ��ʱ�䣬������ʱ��

�ýṹ��������µ�i�����ݵı���Լ�������һ�������ݵ�ʱ��
������set��Ϊcache��һ����ID����һ����next����
���cache���˾�ɾ���´γ���������Ǹ�Ԫ�أ�Ȼ�������Ԫ��
�������Ԫ����cache���У���ôҪ���¸�Ԫ�ص��´γ���ʱ�� 
ϸ�����������룬���ӵúܣ���ʱ��Ҫ��Ҳ�ܸ�

�ؼ��ʣ�̰�ģ�ģ�⣬STL������ 
*/
#include<iostream>
#include<set>
using namespace std;

struct Info
{
    int next;
    int ID;
    
    bool operator <(const Info& i)const
    {
        if(next==i.next)return ID<i.ID;
        else return next<i.next;
    }
};

int main()
{
    int c,n,a;
    cin>>c>>n>>a;
    
    Info access[100000];
    for(int i=0;i<a;i++)
        scanf("%d",&access[i].ID);

    int next[100000]={0};   
    for(int i=a-1;i>=0;i--)
    {
        if(next[access[i].ID]>i)
            access[i].next=next[access[i].ID];
        else access[i].next=a;
        next[access[i].ID]=i;
    }
    
    set<Info> m;
    set<int> s;
    int time=0;
    for(int i=0;i<a;i++)
        if(s.find(access[i].ID)==s.end())
        {
            if(s.size()==c)
            {
                set<Info>::reverse_iterator rit=m.rbegin();
                s.erase((*rit).ID);
                m.erase(*rit);
            }
            time++;
            s.insert(access[i].ID);
            m.insert(access[i]);
        }
        else 
        {
            for(set<Info>::iterator it=m.begin();it!=m.end();it++)
                if((*it).ID==access[i].ID){m.erase(*it);break;}
            m.insert(access[i]);
        }
    
    cout<<time<<endl;
    //while(1);
} 
