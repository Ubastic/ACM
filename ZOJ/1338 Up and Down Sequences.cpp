/*
����һ����������������е�ƽ�����Ⱥ͵ݼ����е�ƽ������
���������������������ȣ���ȡ����֮ǰ��������
������п�ͷ�����ڼ�������ȣ���ȡ��������������
���ȫ����ȣ���up=down=0

��ĿҪ�����ȷ��
���Ǳ��ȥʵ��������Щ�鷳���ѣ���Ҫ���㷨
�����ʽ����С�����6λ��presentation error����������ܹ� 

�ؼ��ʣ����� 
*/
#include<iostream>
#include<iomanip>
using namespace std;

bool front(int p[],int length)
{
    for(int i=0;i<length;i++)
        if(p[i]!=0)
        {
            for(int j=0;j<i;j++)
                p[j]=p[i];
            return true;
        }
    return false;
}

int main()
{
    int n[30];
    while(cin>>n[0])
    {
        if(n[0]==0)break;
        
        int length=0;
        while(n[length]!=0)
        {
            length++;
            cin>>n[length];
        }
        
        int deviation[30];
        for(int i=0;i<length-1;i++)
            deviation[i]=n[i+1]-n[i];
        
        double up,down;
        
        if(front(deviation,length-1)==true)
        {                           
            int len[2]={0},count[2]={0};//[0]����up��[1]����down 
            bool present;
            
            if(deviation[0]>0)present=0;
            else present=1;
            
            len[present]++;
            count[present]++;
                                           
            for(int i=1;i<length-1;i++)
            {
                if(deviation[i]*double(present-0.5)>0)//�û�������
                {
                    present=!present;
                    count[present]++;
                }
                len[present]++;
            }
            
            if(count[0]!=0)up=double(len[0])/count[0];
            else up=0;
            if(count[1]!=0)down=double(len[1])/count[1];
            else down=0;
        }
        else
        {
            up=0;
            down=0;
        }
        
        cout<<"Nr values = "<<length<<":  "<<setiosflags(ios::fixed)<<up<<" "<<setiosflags(ios::fixed)<<down<<endl; 
    }
}
