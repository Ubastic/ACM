/*
�û��������֣�����n��������Ҫ��ڳ�ǡ��n��������С���ּ��������

1 2 3 4 5 6 7 8 9 0
2 5 5 4 5 6 3 7 6 6
�ȿ�������֣�������λҪ�����ܵö࣬���ǿ��ǵ�1��7����������
��nΪż��ʱ���϶�ȫ��1��λ��࣬����Ҳ�����
��nΪ����ʱ����һ��711111111��������

�ٿ���С���֣�Ҫ����λ�����ܵ��٣�������8
���n��7�ı������϶�ȫ��8��ã�888 
���n=7k+1��������һ��8����0���ټ�һ��1������1088
���n=7k+2��1888
���n=7k+3��k=0:7 , k=1:22 , k=2:200 ,k>2:20088888
���n=7k+4��k=0:4 , k=1:20 ,k>1:2088888
���n=7k+5��2888888
���n=7k+6��6888888

�ؼ��ʣ����죬�ҹ��� 
*/ 
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        switch(n%7)
        {
            case 0:
                for(int i=0;i<n/7;i++)cout<<8;
                break;
            case 1:
                cout<<10;
                for(int i=1;i<n/7;i++)cout<<8;
                break;
            case 2:
                cout<<1;
                for(int i=0;i<n/7;i++)cout<<8;
                break;
            case 3:
                switch(n/7)
                {
                    case 0:
                        cout<<7;break;
                    case 1:
                        cout<<22;break;
                    default:
                        cout<<200;
                        for(int i=2;i<n/7;i++)cout<<8;
                }
                break;
            case 4:
                if(n<7)cout<<4;
                else
                {
                    cout<<20;
                    for(int i=1;i<n/7;i++)cout<<8;
                }
                break;
            case 5:
                cout<<2;
                for(int i=0;i<n/7;i++)cout<<8;
                break;
            case 6:
                cout<<6;
                for(int i=0;i<n/7;i++)cout<<8;
        }
        
        cout<<' ';
        if(n%2==0)
            for(int i=0;i<n/2;i++)
                cout<<1;
        else
        {
            cout<<7;
            for(int i=1;i<n/2;i++)
                cout<<1;
        }
        cout<<endl;
    }
} 
