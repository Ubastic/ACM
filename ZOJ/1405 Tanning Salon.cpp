/*
salon����n�Ŵ�����һ���˿��б������˿͵Ľ��ͳ���˳�����ĳ���˿ͽ���ʱû��λ�ӣ���������
���ж��ٹ˿�walk away��

��һ��set���ʾһ��ɳ�����λ��
��string���ʾ�����ַ���
ÿ�δӶ�ͷ��ȡһ���ַ����ˣ����ж�ɳ�����Ƿ��������
�еĻ�����ɳ�����������뿪
û�еĻ����ж�salon���Ƿ���Ա��û���Ͱ�����˼ӵ�ɳ����
���˾�count++�����ҰѶ�����ı�ʾ������뿪���ַ�Ҳɾ��

�ؼ��ʣ�ģ�⣬STL������ 
*/
#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int bed;
    while(cin>>bed)
    {
        if(bed==0)break;
        
        string Queue;
        cin>>Queue;
            
        set<char> salon;
        int count=0;
        while(Queue.size()>0)
        {
            char next=Queue[0];
            Queue.erase(Queue.begin());//��ȡ���е���һ���� 
            
            if(salon.find(next)!=salon.end())//����ҵ���salon������ͬ���� 
                salon.erase(next);//������뿪 
            else if(salon.size()<bed)//���salon�ﻹ�п�λ
                salon.insert(next);
            else//���� 
            {
                Queue.erase(Queue.begin()+Queue.find(next));
                count++;
            }
        }
        
        if(count==0)cout<<"All customers tanned successfully."<<endl;
        else cout<<count<<" customer(s) walked away."<<endl;
    }
}
