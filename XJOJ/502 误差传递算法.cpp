/*
���������Ĺ��������������

���Զ�һ��������һ����û��Ҫ������

�ؼ��ʣ����� 
*/
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        int ai;
        int bi;
        int ri=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ai);
            if(ai+ri<128)
            {
                printf("0");
                ri=ai+ri;
            }
            else
            {
                printf("1");
                ri=ai+ri-255;
            }
        }
        printf("\n");
    }
    
    
    //while(1);
}
