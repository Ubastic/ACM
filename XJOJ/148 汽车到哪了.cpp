/*
����վ��վ֮��ľ��룬������·����������������һվ������վ֮��

����վ��վ֮��ľ��룬��д��ÿվ�����ľ���
�ٶ���·�������ö��ֲ��������ĸ�λ��
���ö��ֻᳬʱ��

�ؼ��ʣ����ֲ��� 
*/ 
#include<iostream>
using namespace std;

int main()
{
    int station[10001];
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m,ask;
        cin>>n>>m;
        
        station[1]=0;
        for(int i=2;i<=n;i++)
        {
            cin>>station[i];
            station[i]+=station[i-1];
        }

        int start,end,middle;
        while(m--)
        {
            cin>>ask;
            start=1;end=n;
            while(end-start>1)
            {
                middle=(end+start)/2;
                if(station[middle]>=ask)end=middle;
                else if(station[middle]<=ask)start=middle;
            }
            if(station[start]==ask)cout<<start<<endl;
            else if(station[end]==ask)cout<<end<<endl;
            else cout<<start<<' '<<end<<endl;
        }
    }

    return 0;
}
