/*
�ж�������2<=b<=10�������Ƿ��ܱ����ĸ�λ������ 

һ������������base b
����һ���ַ�ָ�������֣��ֱ����ʮ���Ƶ�ֵ�͸�λ�ͣ��ж��ܷ��������� 

�ؼ��ʣ�����ת������ѧ�⣬���� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    
    while(cases--)
    {
        int base;
        while(cin>>base)
        {
            if(base==0)break;
            
            string num;
            cin>>num;
            
            int sum=0;//��λ���ֺ� 
            int convert=0;//ת��Ϊʮ���ƺ��ֵ 
            
            for(int i=num.length()-1,p=1;i>=0;i--)
            {
                sum+=(num[i]-'0');
                convert+=(num[i]-'0')*p;
                p*=base;
            }
            if(convert%sum==0)cout<<"yes"<<endl;
            else cout<<"no"<<endl;

        }
        if(cases>0)cout<<endl;
    }
    
    return 0;
}
