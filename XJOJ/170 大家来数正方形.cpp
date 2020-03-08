/*
��һ��bool�����������߳�����2��ȫ1�����Σ����Ұ��ձ߳���С���ÿ�ֱ߳����ж��ٸ� 

�����˼��ͬZOJ 2067
ֻ��������int count����������ø�map����

�ؼ��ʣ���˼�� 
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n;
    cin>>n;
    
    int square[250][250];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            square[i][j]=c-'0';
        }
    
    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
            if(square[i][j]==1)
                square[i][j]+=square[i][j-1];
    
    map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(square[i][j]>=2)
            {
                int min=square[i][j];
                for(int k=i+1;k<n;k++)
                {
                    if(square[k][j]<min)min=square[k][j];
                    if(min<k-i+1)break;
                    else m[k-i+1]++;
                }
            }
        }
    }
    
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<' '<<(*it).second<<endl;
        
    //while(1);
}
