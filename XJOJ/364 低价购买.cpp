/*
�ҳ������е�������Ӵ������һ�Ҫ����ж��ٸ���ͬ��

��̬�滮�ľ����⣬��һ�ʺ���
���Ե�i��Ԫ�ؽ�β���Ӵ���󳤶�Ϊm[i]
��ô״̬ת�Ʒ��̾��ǣ�m[i]=max(m[j])+1  j<i��price[j]>price[i]

���ǻ���������һ����̬�滮���ǽ�ĸ���
count[i]��ʾ�Ե�i��Ԫ�ؽ�β�Ľ�ĸ������赱ǰ����Ϊl��
��ô״̬ת�Ʒ���count[i]����iǰ��m[j]����Ϊl-1�ĺ�
����ע�������m[a]=m[b]=l-1��price[a]=price[b]����ôֻ��������һ����
����ԭ��˵��
 
Ϊ�˷��㣬������������һ��-1Ԫ�أ���֤��Ŀ϶��������һ��Ԫ�ؽ�β����

�ؼ��ʣ���̬�滮  
*/
#include<iostream>
#include<set>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n;
    cin>>n;
    
    int price[5001];
    for(int i=0;i<n;i++)
        cin>>price[i];
    price[n]=-1;
        
    int count[5001];
    int m[5001]={0};
    for(int i=0;i<=n;i++)
    {
        int max=0;
        for(int j=0;j<i;j++)
            if(price[j]>price[i] && max<m[j])
                max=m[j];
        m[i]=max+1;
        
        set<int> s;
        for(int j=i-1;j>=0;j--)
            if(price[j]>price[i] && m[j]==max)
                if(s.find(price[j])==s.end())
                {
                    count[i]+=count[j];
                    s.insert(price[j]);
                }
        if(count[i]==0)count[i]=1;
    }
    
    cout<<m[n]-1<<' '<<count[n];
    //while(1);
}
