/*
������1,2,2,3,3,3,4,4,4,4,5,5,5,5,5...��ǰn���

��һ�������������ӣ����ʣһ�㵥������Ϳ�����

�ؼ��ʣ���ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int day;
        while(cin>>day)
        {
            if(day==0)break;
            
            int c=1,coin=0,save=day;
            while(day>c)
            {
                coin+=c*c;
                day-=c;
                c++;
            }
            coin+=c*day;
            
            cout<<save<<' '<<coin<<endl;
        }
        if(t>0)cout<<endl;
    }
}
