/*
ţ��ţ��ͬ�Ĺ�һ����Ӱ���ǵĹ�ϵ��Ϊ1����һֻţ��Ϊ2����ƽ���������С����ͷţ��ƽ�������*100

�������ݣ���ͼ��ţ�ǽڵ㣬��ͷţҪ��ͬ�Ĺ�һ����Ӱ����һ��·
�ֱ������ȱ���ÿֻţ���õ�ÿֻţ���ܷ���ȣ�����N-1*100

�ؼ��ʣ�ͼ�ۣ����⣬��ȱ��� 
*/
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    int N,M,Mi;
    cin>>N>>M;
    
    bool map[301][301]={false};
    while(cin>>Mi)
    {
        int cow[100];
        for(int i=0;i<Mi;i++)
            cin>>cow[i];
        for(int i=0;i<Mi;i++)
            for(int j=i+1;j<Mi;j++)
                map[cow[i]][cow[j]]=map[cow[j]][cow[i]]=true;
    }
    /*
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
            cout<<map[i][j]<<' ';
        cout<<endl;
    }
    */
    int min=2000000000;
    for(int i=1;i<=N;i++)
    {
        bool used[301]={false};
        used[i]=true;
        queue<int> ID,DEGREE;
        ID.push(i);
        DEGREE.push(0);
        
        int total=0;
        while(ID.size()>0)
        {
            int id=ID.front();
            int degree=DEGREE.front()+1;
            ID.pop();
            DEGREE.pop();
            
            for(int j=1;j<=N;j++)
                if(map[id][j]==true && used[j]==false)
                {
                    ID.push(j);
                    DEGREE.push(degree);
                    total+=degree;
                    used[j]=true;
                }
        }
        if(total<min)min=total;
    }
    cout<<int((min)*100.0/(N-1));
    //while(1);
}
