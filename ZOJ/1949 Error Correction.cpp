/*
����һ����������,���ÿ��ÿ�еĺͶ�Ϊż�������OK
���ı�����һ��ֵ���Դ�����������������ֵ���к���,�����������Corrupt

�����ж�,����������һ�кͽ���һ��Ϊ����
��ı����ǵĽ�����ֵ����

�ؼ���:���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        bool matrix[100][100];
        int sum_row[100]={0};
        int sum_column[100]={0};
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>matrix[i][j];
                sum_row[i]+=matrix[i][j];
                sum_column[j]+=matrix[i][j];
            }
            
        int odd_row=0,row,odd_column=0,column;
        for(int i=0;i<n;i++)
        {
            if(sum_row[i]%2==1){odd_row++;row=i;}
            if(sum_column[i]%2==1){odd_column++;column=i;}
        }
        
        if(odd_row==0 && odd_column==0)
            cout<<"OK"<<endl;
        else if(odd_row==1 && odd_column==1)
            cout<<"Change bit ("<<row+1<<","<<column+1<<")"<<endl;
        else 
            cout<<"Corrupt"<<endl;
    }
} 
