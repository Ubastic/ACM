/*
����һ�˷�n<=20���ƣ�ÿ�αȽ�һ�ţ���һ�˵��Ƶĵ�������һ�˴�һ���ϣ�����˵÷ּӴ��Ƶĵ�������һ�˵��Ʊ���һ��Сһ�������÷ּ��������Ƶ������ܺ͡�������1��2����1���˵�6�ֶ�����3�֡�

��if�жϣ�һ��һ����

�ؼ��ʣ�����
*/
#include<iostream>
using namespace std;

int main()
{
    int card_a[20],card_b[20],score_a,score_b,n,end=0;
    
    while(cin>>n)
    {
        if(n==0)break;
        if(end==1)cout<<endl;
        
        for(int i=0;i<n;i++)
            cin>>card_a[i];          //�����Ƶĵ���
        for(int i=0;i<n;i++)
            cin>>card_b[i];          //�����Ƶĵ���
          
        score_a=score_b=0;  
            
        for(int i=0;i<n;i++)
        {
            if(card_a[i]==card_b[i])continue;      //����һ�������÷�
            if(card_a[i]>card_b[i])
            {
                if(card_a[i]-card_b[i]==1)       
                {
                    if(card_b[i]==1)score_b+=6;    
                               else score_b+=card_a[i]+card_b[i];    
                }
                if(card_a[i]-card_b[i]>1)score_a+=card_a[i];  
            }
            else
            {
                if(card_b[i]-card_a[i]==1)
                {
                    if(card_a[i]==1)score_a+=6;
                               else score_a+=card_a[i]+card_b[i];
                }
                if(card_b[i]-card_a[i]>1)score_b+=card_b[i];  
            }
        }
        cout<<"A has "<<score_a<<" points. B has "<<score_b<<" points."<<endl;
        end=1;
    }
    
    return 0;
}

