/*
��ÿ�����������⣬ÿ���˻ش�һ��һ�١���������Ŀ������ж�����

�ò��鼯��˼�룬����vertex���鼯����ʼʱ������޹�ϵ
����answer�����ʾÿ����Ĵ�
��������ⲻ��ͬһ���ϣ��ͺϲ����ϣ�����˳��Ѵ�Ҳ����һ�£�С�ص㣩
�����������ͬһ���ϣ����ж�һ���Ƿ�ì��
������ʣ��t�����ϣ������Ծ���2^t
�𰸺ܴ�Ҫ�ø߾��� 

�ؼ��ʣ�λ���㣬���鼯���߾��� 
*/
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    
    bool answer[201]={false};
    int vertex[201];
    for(int i=1;i<=M;i++)
        vertex[i]=i;
        
    for(int i=0;i<N;i++)
    {
        int q1,q2;
        bool a1,a2;
        cin>>q1>>a1>>q2>>a2;
        
        if(vertex[q1]!=vertex[q2])
        {
            bool inverse=!((a1^a2)^(answer[q1]^answer[q2]));
            int t=vertex[q2];
            
            for(int i=1;i<=M;i++)
                if(vertex[i]==t)
                {
                    vertex[i]=vertex[q1];
                    answer[i]=inverse^answer[i];
                }
        }
        else if((a1^a2)==(answer[q1]^answer[q2]))
        {
            cout<<"NO ANSWER"<<endl;
            return 0;
        }
    }
    
    set<int> s;
    for(int i=1;i<=M;i++)
        s.insert(vertex[i]);
    
    int digit[10000]={1};
    int length=1;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<length;j++)
            digit[j]*=2;
        for(int j=0;j<length;j++)
            if(digit[j]>9)
            {
                digit[j+1]+=digit[j]/10;
                digit[j]%=10;
            }
        if(digit[length]>0)length++;
    }
    for(int i=length-1;i>=0;i--)
        cout<<digit[i];
}
