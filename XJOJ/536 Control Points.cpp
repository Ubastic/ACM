/*
���������һ�ѵ㣬����Ҫ�ø��Ƿ�Χ1m��sth������Щ�㣬��������Ҫ���ٸ�sth

̰��

�ؼ��ʣ����⣬̰�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        double point;
        cin>>point;
        int total=1;
        
        for(int i=1;i<N;i++)
        {
            double temp;
            cin>>temp;
            
            if(temp-point>=1)
            {
                point=temp;
                total++;
            }
        }
        cout<<total<<endl;
    }
}
