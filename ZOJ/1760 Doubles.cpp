/*
�������һ���������м�������(a,b)������a��b�Ķ���

��٣�����n^2������

�ؼ��ʣ���ٷ�
*/
#include <iostream> 
using namespace std; 

int main()
{ 
    int x,t,count,data[15]; 
    
    while(cin>>x)
    { 
        if(x==-1)break;

        data[0]=x;
        t=1;
        count=0; 
        
        while(cin>>x&&x!=0) 
            data[t++]=x;          //��һ��������������
        
        for(int i=0;i<t;i++) 
            for(int j=0;j<t;j++)
                if(data[j]==data[i]*2)count++; 
                
        cout<<count<<endl; 
    } 
    return 0; 
} 
