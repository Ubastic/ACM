/*
�Ӹ�����һ�������ҳ��������һ����ʹ������������ֵ����Сֵ�Ĳ����C

������һ�����Ŀ�ͷ��Ҫ�����������ܳ���C
���������C�ʹӵ�ǰ�е�ĩβ��ǰ�ҵ��µĿ�ͷ
��¼���ȵ����ֵ

�ؼ��ʣ�ģ�⣬ֱ���� 
*/
#include<iostream>
using namespace std;

int arr[1000000]; 

int main()
{
    int C,N; 
    cin>>C>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    
    int ans=0;
    for(int i=0;i<N;i++)
    { 
        int length=1;
        int minimum=arr[i];
        int maximum=arr[i];
        for(int j=i+1;j<N;j++)
        { 
            if(arr[j]<minimum)
            { 
                minimum=arr[j]; 
                if(maximum-minimum>C)
                {                 
                    for(int k=j-1;k>=0;k--)
                        if(arr[k]==maximum){i=k;break;}
                    break; 
                } 
            } 
            else if(arr[j]>maximum)
            { 
                maximum=arr[j]; 
                if(maximum-minimum>C)
                { 
                    for(int k=j-1;k>=0;k--)
                        if(arr[k]==minimum){i=k;break;}
                    break; 
                } 
            } 
            length++; 
        } 
        ans=max(ans,length); 
    } 
    cout<<ans;
    //while(1);
}
