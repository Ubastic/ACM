/*
��windows��Ϣ���еĴ���������Ϣ��Ϊ���ƣ����ݣ����ȼ���get��ʱ���������

��ʵ�������ȶ��У���STLһ��������
������cinʲô�Ļᳬʱ

�ؼ��ʣ�STL�����ȶ��� 
*/
#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Message
{
    char Name[100];
    int Data;
    int Priority;
    
    bool operator<(const Message &a)const
    {
        return a.Priority<Priority;
    }
};

int main()
{
    char message[4];
    priority_queue<Message> v;
    
    while(scanf("%s",&message)!=EOF)
    {
        if(strcmp(message,"PUT")==0)
        {
            Message temp;
            scanf("%s%d%d",&temp.Name,&temp.Data,&temp.Priority);
            v.push(temp);
        }
        else
        {
            if(v.size()==0)printf("EMPTY QUEUE!\n");
            else 
            {
                printf("%s %d\n",v.top().Name,v.top().Data);
                v.pop();
            }
        }
    }
} 
