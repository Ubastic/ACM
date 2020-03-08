/*
����16�׵ķ��󣬱�ʾ��i����Ӯ��j���ĸ���
��16��������̭�����ÿ�����ҵùھ��ĸ���

��һ�������� 
�ȶ������ݡ���i-j��ʽΪ��i����Ӯ��j���ĸ��ʣ���ô16��ÿ������ǿ�ĸ���Ϊ��
1-2 2-1 3-4 4-3 5-6 6-5 7-8 8-7 9-10 10-9 11-12 12-11 13-14 14-13 15-16 16-15
�ٿ���һ�����ҽ���ǿ�ĸ��ʣ�
��һ�����ҽ���ǿ*����һ��������Ӯ����������*���������ҽ���ǿ+��һ��������Ӯ���ĸ�����*���ĸ����ҽ���ǿ�� 
д��������1-2*(1-3*3-4+1-4*4-3)
����һ������percentage[4][16]
percentage[0][j]��ʾ��j�����ҽ���ǿ�ĸ��� 
percentage[1][j]��ʾ��j�����ҽ���ǿ�ĸ��� 
percentage[2][j]��ʾ��j�����ҽ���ǿ�ĸ��� 
percentage[3][j]��ʾ��j�����ҵĹھ��ĸ��� 
�����ٿ���һ�����ҽ���ǿ�ĸ��ʣ�
percentage[0][1]*(1-3*percentage[0][3]+1-4*percentage[0][4]) 
��һ�����ҽ���ǿ�ĸ��ʣ�
percentage[1][1]*(1-5*percentage[1][5]+1-6*percentage[1][6]+1-7*percentage[1][7]+1-8*percentage[1][8]) 
֪����ԭ�����һ��forȥ������е�percentage������
ʵ�ֺ���Ҫ���ɣ��Ҳ���˵���м��ɡ���

���������ʽ���úܶ࣬�࿴iomanip

�ؼ��ʣ���ѧ�⣬������ 
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    string country[16];
    for(int i=0;i<16;i++)
        cin>>country[i];
        
    double win[16][16];
    for(int i=0;i<16;i++)
        for(int j=0;j<16;j++)
        {
            cin>>win[i][j];
            win[i][j]/=100.0;
        }
    
    double percentage[4][16]={0};
    for(int i=0;i<16;i+=2)
    {
        percentage[0][i]=win[i][i+1];
        percentage[0][i+1]=win[i+1][i];
    }
    
    for(int i=1;i<4;i++)//��ǿ����ǿ����ǿ������ 
    {
        int group=pow(2.0,i);
        for(int j=0;j<16;j+=2*group)
        {
            for(int k=j;k<j+group;k++)
            {
                for(int l=j+group;l<j+2*group;l++)
                    percentage[i][k]+=win[k][l]*percentage[i-1][l];//k���l�ĸ��ʳ���l���ߵĸ��� 
                percentage[i][k]*=percentage[i-1][k];//����ٳ���k���ߵĸ��� 
            }
            for(int k=j+group;k<j+2*group;k++)
            {
                for(int l=j;l<j+group;l++)
                    percentage[i][k]+=win[k][l]*percentage[i-1][l];
                percentage[i][k]*=percentage[i-1][k];
            }
        }
    }
    
    for(int i=0;i<16;i++)
    {
        double p=int(percentage[3][i]*10000+0.5)/100.0;
        cout.precision(2);
        cout<<left<<setw(10)<<country[i]<<" p="<<fixed<<p<<"%"<<endl;
    } 
    
    //while(1);
}
