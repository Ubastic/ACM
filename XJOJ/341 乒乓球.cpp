/*
����һ��W��L��E����������win��lose������ֱ������11�����º�21�����µıȷ�

�����������������ıȷ֣�һ���ַ�һ���ַ��Ķ��룬���㣬������
Ҫ��������������һ�ֱ����Ľ���������һ�ֱ����Ŀ�ʼ���������һ��Ϊ0:0

�ؼ��ʣ�ģ���� 
*/
#include<iostream>
using namespace std;

int main()
{
    char c;
    int result_11[20000][2]={0};//11�����µı�����������20000�� 
    int result_21[20000][2]={0};
    int count_11=0;//��¼��ǰ���� 
    int count_21=0;
    
    while(cin>>c)
    {
        if(c=='E')break;
        
        if(c=='W')
        {
            result_11[count_11][0]++;
            result_21[count_21][0]++;
        }
        else
        {
            result_11[count_11][1]++;
            result_21[count_21][1]++;
        }
        
        if(result_11[count_11][0]>=11 && result_11[count_11][0]-result_11[count_11][1]>=2)count_11++;
        if(result_11[count_11][1]>=11 && result_11[count_11][1]-result_11[count_11][0]>=2)count_11++;
        if(result_21[count_21][0]>=21 && result_21[count_21][0]-result_21[count_21][1]>=2)count_21++;
        if(result_21[count_21][1]>=21 && result_21[count_21][1]-result_21[count_21][0]>=2)count_21++;//�������ж��Ƿ����һ�� 
    }
    
    for(int i=0;i<=count_11;i++)
        cout<<result_11[i][0]<<":"<<result_11[i][1]<<endl;
    cout<<endl;
    for(int i=0;i<=count_21;i++)
        cout<<result_21[i][0]<<":"<<result_21[i][1]<<endl;
        
    //while(1);
}
