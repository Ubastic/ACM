/*
����ʱ������ڵ�ʱ������GMT+0��ʱ�䡣���ڱ����е�����ʾ������������������ܵ���С���Ǹ�ʱ��

������forѭ��ö�ٳ����е�ʱ�估ʱ����������
Ȼ��ѭ�����ж�������Ƿ���ȷ����Сʱ������24��û��GMT-0��
�����ȷ�Ļ�����GMT+0��ʱ�䣬������Ϊstring�����set��
������set�ĵ�һ����

�ؼ��ʣ�ģ�⣬�鷳�� 
*/
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    string s;
    while(getline(cin,s))
    {
        set<string> result;
        char H_2,H_1,M_2,M_1,SIGNE,ZONE;
        H_2=s[0];
        H_1=s[1];
        M_2=s[3];
        M_1=s[4];
        SIGNE=s[9];
        ZONE=s[10];

        for(int h2=0;h2<=2;h2++)
            if(H_2=='?' || H_2==h2+'0')
                for(int h1=0;h1<10;h1++)
                    if(H_1=='?' || H_1==h1+'0')
                        for(char m2='0';m2<'6';m2++)
                            if(M_2=='?' || M_2==m2)
                                for(char m1='0';m1<='9';m1++)
                                    if(M_1=='?' || M_1==m1)
                                        for(char signe='-';signe>='+';signe-=2)
                                            if(SIGNE=='?' || SIGNE==signe)
                                                for(int zone=0;zone<=9;zone++)
                                                    if(ZONE=='?' || ZONE==zone+'0')
                                                    {
                                                        int hour=h2*10+h1;
                                                        if(hour>=24)continue;//�ж�Сʱ��ֵ�Ƿ񳬳�23
                                                        if(signe=='-' && zone==0)continue;//�������GMT-0 
                                                    
                                                        if(signe=='-')hour=(hour+zone)%24;
                                                        else hour=(hour-zone+24)%24;
                                                        
                                                        string time;
                                                        time.push_back(hour/10+'0');
                                                        time.push_back(hour%10+'0');
                                                        time.push_back(':');
                                                        time.push_back(m2);
                                                        time.push_back(m1);

                                                        result.insert(time);
                                                    }
    cout<<*result.begin()<<endl;
    }
    
    //while(1);
} 
