/*
����һ�����У�������е�������Ӵ��ĳ���

�ö�̬�滮���ٶ��Ե�k��Ԫ�ؽ�β��������Ӵ��ĳ���Ϊmaxlen[k]
���һ��Ԫ��maxlen[0]=1
maxlen[k]=max{maxlen[i]}+1����i<k����s[i]<s[k] 
���Ƽ���������е�maxlen
�ҳ������������
LIS��ɶ�� 

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        if(i>0)cout<<endl;
        
        int n;
        cin>>n;
        int sequence[1000],maxlen[1000]={1};
        for(int j=0;j<n;j++)
        {
            cin>>sequence[j];
            int max=0;
            for(int k=0;k<j;k++)
            {
                
                if(sequence[k]<sequence[j] && maxlen[k]>max)
                    max=maxlen[k];
            }
            maxlen[j]=max+1;
        }//����״̬ת�Ʒ��̵����� 
        
        int max=0;
        for(int j=0;j<n;j++)
            if(maxlen[j]>max)max=maxlen[j];
        cout<<max<<endl;
    }
} 
