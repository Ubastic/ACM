/*
n����Ҫס�꣬���Ǳ���סͬһ���ùݣ���w����ĩ����ѡ��
��֪ÿ���ùݵļ۸��ÿ����ĩ�Ĵ����������ٻ��ѣ�����Ԥ�����stay home

���⣬ֱ��ģ��

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,budget,hotel,week;
    cin>>n>>budget>>hotel>>week;
    
    int min_price=1000000;
    for(int i=0;i<hotel;i++)
    {
        int price;
        cin>>price;
        
        int max_bed=0;
        for(int j=0;j<week;j++)
        {
            int bed;
            cin>>bed;
            if(max_bed<bed)max_bed=bed;
        }
        
        if(max_bed>=n)
            if(min_price>price)min_price=price;
    }
    
    if(min_price*n>budget)cout<<"stay home"<<endl;
    else cout<<min_price*n<<endl;
    
    //while(1);
} 
