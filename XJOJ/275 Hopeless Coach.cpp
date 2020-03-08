/*
Ӯһ��������3�֣�ƽһ����1�֣���һ�����÷֡�
��֪��Ҫ����N��������֪����ǰ����Ӯ�˼�����ƽ�˼��������˼��������������������ʣ�
�����Ժ�N�������ٵ�P�ֵĸ���

�ȸ�����ǰ���������Ӯһ���ĸ��ʣ�����ƽ�����
Ȼ��ö��N���������п��ܵ���ϣ�Ӯ�ĳ�����ƽ�ĳ����� 
����ÿһ����ϣ�����÷ִ��ڵ���P�����������ϵĸ��ʼ���
���ʵ��㷨��C(N,win)*pow(p_win,win)*C(N-win,draw)*pow(p_draw,draw)*pow(p_lose,lose);
�����Ҫ��

�ؼ��ʣ�ģ�⣬������ 
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int C(int a,int b)
{
    if(b==0 || b==a)return 1;
    
    return C(a-1,b-1)+C(a-1,b);
}

int main()
{
    int N,P;
    while(cin>>N>>P)
    {
        if(N==0 && P==0)break;
        
        int W,D,L;
        cin>>W>>D>>L;
        
        double p_win=double(W)/(W+D+L);
        double p_draw=double(D)/(W+D+L);
        double p_lose=double(L)/(W+D+L);

        double p=0;
        for(int win=0;win<=N;win++)
            for(int draw=0;draw<=N-win;draw++)
            {
                int lose=N-win-draw;
                int point=3*win+draw;
                if(point>=P)
                    p+=C(N,win)*pow(p_win,win)*C(N-win,draw)*pow(p_draw,draw)*pow(p_lose,lose);
            }
        
        cout.precision(1);
        cout<<fixed<<p*100<<endl;
    }
} 
