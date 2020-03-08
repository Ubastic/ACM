/*
�����ʼֻ��һ̨���ԣ�ÿ����һ̨���Ծ������ߺ���ǰĳһ̨���������ҵ�֪���߳��ȡ������������ÿ̨���ԣ��������߾�����Զ�ĵ��Գ���

����Ŀ����˼���ý�����һ������ÿһ���ڵ�����������׵����߳��ȣ������׵ı�ţ������ǵı��
���ⶨ��firstΪ�ýڵ�������������Զ�ľ���
����secondΪ�ýڵ������������ڶ�Զ�ľ���
����thirdΪ�ýڵ㸸�׷�����������Զ�ľ���
�������Ƕ��������ǴӸ����ӣ�����ֻҪ�Ӻ���ǰ����һ�鼴���������first��second
��third�ķ����� 
1�����first[i]+d[i]=first[p[i]](����p[i]��ʾi�ĸ��׽ڵ��ţ�d[i]��ʾ�ɴ˽ڵ㵽���׽ڵ�ľ��룩
�ͱ����Ӹ��׽ڵ�������е����׽ڵ�����������iΪ���������У���Ȼ���ֵ����������third,��Ҳ��Ҫһ��second��ԭ��
��������������third [i]=max(second[p[i]]+d[i],third[p[i]]+d[i])��
2�����first[i]+d[i]!=first[p[i]],��˵���Ӹ��׽ڵ�������е����׽ڵ�������ĵ㲻����iΪ���������У�
����third[i]=max(first[p[i]]+d[i],third[p[i]]+d[i])��
���Ҫ�����������f[i]=max(first[i],third[i])

�ؼ��ʣ���˼�룬��̬�滮���������� 
*/
#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
using namespace std;

struct Tree
{
    int length;
    int father;
    vector<int> son;
    int first;
    int second;
    int third;
    Tree():length(0),father(0),first(0),second(0),third(0){}
};

int main()
{
    //freopen("aaa.txt","r",stdin);
    int N;
    scanf("%d",&N);
    
    Tree computer[10000];
    for(int i=1;i<N;i++)
    {
        scanf("%d %d",&computer[i].father,&computer[i].length);
        computer[i].father--;
        computer[computer[i].father].son.push_back(i);
    }
    
    for(int i=N-1;i>=0;i--)
    {
        priority_queue<int> pq;
        for(vector<int>::iterator it=computer[i].son.begin();it!=computer[i].son.end();it++)
            pq.push(computer[*it].first+computer[*it].length);
        computer[i].first=pq.empty()?0:pq.top();
        if(pq.empty()==false)pq.pop();
        computer[i].second=pq.empty()?0:pq.top();
    }
    
    for(int i=1;i<N;i++)
    {
        if(computer[i].first+computer[i].length==computer[computer[i].father].first)
            computer[i].third=max(computer[computer[i].father].second+computer[i].length,computer[computer[i].father].third+computer[i].length);
        else computer[i].third=max(computer[computer[i].father].first+computer[i].length,computer[computer[i].father].third+computer[i].length);
    }
    
    for(int i=0;i<N;i++)
        printf("%d\n",max(computer[i].first,computer[i].third));
        
    //while(1);
}
