/*
��һ�ѵ�����꣬����Щ�������ɶ��ٸ��ߴ�ֱ��������ľ���

ֱ��ö�٣���ö�����½ǵĵ㣬��ö�����½ǵĵ�
Ȼ�������Ͻǵģ���������Ͻǵģ�һ��һ���ж��Ƿ���Թ��ɾ���
�ĸ�for��һ��

�ؼ��ʣ����⣬ö�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    int point[1000][2];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>point[i][0]>>point[i][1];
        
    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(point[j][1]==point[i][1] && point[j][0]>point[i][0])
                for(int k=0;k<n;k++)
                    if(point[k][0]==point[j][0] && point[k][1]>point[j][1])
                        for(int l=0;l<n;l++)
                            if(point[l][1]==point[k][1] && point[l][0]==point[i][0])
                                count++;
    cout<<count;
    
    //while(1);
}
