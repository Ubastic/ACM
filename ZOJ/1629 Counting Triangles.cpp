/*
��n���������ι��������ٸ�������

�������ģ���������һ��һ��ӡ���һ��1�����ڶ���1+2����������1+2+3��������
�������ģ�˼·һ��ֻ����Ҫ�࿼�Ǵ����ǲ������������n=6ʱ�� 
��һ��1��
�ڶ���2+1��
������3+2+1��
���Ĳ�4+3+2��
�����5+4��
������6�����൱�ڱ���������1+(3+2+1)+(5+4+3+2+1)�� 

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1){cout<<1<<endl;continue;}
        
        int result=0;

        //����������
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++)result+=j;
   
        //���㵹����
        for(int i=1;i<=n-1;i++)
            for(int j=1;j<=i;j++)result+=j;
        for(int i=n-2;i>0;i-=2)
            for(int j=1;j<=i;j++)result-=j;
    
        cout<<result<<endl;
    }
}
