/*
����N�����пյ����ڣ��Լ�������Q���˲μӻ��飬Ҫ��һ���п������Ļ�������

������date[100]�����п����ڵ���������ÿ����һ�����ڣ��ڸýǱ��ϼ�һ��
Ȼ���ҳ��п�����������һ�죬�������С��Q���0�����������һ�������

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int N,Q;
    while(cin>>N>>Q)
    {
        if(N==0 && Q==0)break;
        
        int date[100]={0};
        for(int i=0;i<N;i++)
        {
            int m;
            cin>>m;
            for(int j=0;j<m;j++)
            {
                int day;
                cin>>day;
                date[day]++;
            }
        }
        
        int max=0,max_date=0;
        for(int i=1;i<100;i++)
        {
            if(date[i]>max)
            {
                max=date[i];
                max_date=i;
            }
        }
        if(max<Q)cout<<0<<endl;
        else cout<<max_date<<endl;
    }
}
