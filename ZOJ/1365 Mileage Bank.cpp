/*
�����ɻ�����̻��֡�ͷ�Ȳն������֣������1.5�������ò�С��500mile��500mile�㣬���ڵİ�ԭֵ��

���������Ǹ��ѵ�
�����ʵ������С�� 

�ؼ��ʣ�ģ�⣬���� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    int mile;
    char c;
    
    while(true)
    {
        double mileage=0;
        
        while(cin>>s1)
        {
            if(s1=="0")break;
            if(s1=="#")return 0;
        
            cin>>s2>>mile>>c;
            
            switch(c)
            {
                case 'F':mileage+=mile*2;break;
                case 'B':mileage+=mile*1.5;break;
                case 'Y':if(mile<500)mileage+=500;
                         else mileage+=mile;
            }
        }
        cout<<mileage<<endl;
    }
} 
