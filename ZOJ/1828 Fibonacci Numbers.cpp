/*
�������������쳲��������еĸ��ÿһ��ᳬ��1000λ��

1000λ����һ���ڵ�4000�������ȫ����������̫��ʵ��Ҳ�������������쵫���ڴ棩 
������ͨ�����߾��ȼ���

�ؼ��ʣ��߾��ȼ��㣬��ѧ�⣬���� 
*/
#include<iostream>
using namespace std;

int main()
{
    int answer_1[1001]={1,1},answer_2[1001]={1,1};//answer_1[0]Ϊλ�� 
    int n;
    void add(int *,int *);
    
    //freopen("aaa.txt","r",stdin);
  
    while(cin>>n)
    {
        for(int i=0;i<1001;i++)
        {
            answer_1[i]=0;
            answer_2[i]=0;
        }
        answer_1[0]=answer_1[1]=answer_2[0]=answer_2[1]=1;
        
        while(n>2)
        {
            add(answer_1,answer_2);
            add(answer_2,answer_1);
            n-=2;
        }    
    
        if(n%2==0)
        for(int i=answer_2[0];i>0;i--)
            cout<<answer_2[i];
        else for(int i=answer_1[0];i>0;i--)
            cout<<answer_1[i];
        cout<<endl;
    }
    
    //while(1);
    return 0;
}

void add(int p[],int q[])
{    
    for(int i=1;i<=q[0];i++)
    {
        p[i]+=q[i];
        if(p[i]>9){p[i+1]++;p[i]-=10;}
    }
    if(p[p[0]+1]!=0)p[0]++;
}
