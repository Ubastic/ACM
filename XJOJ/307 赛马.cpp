/*
��������⣬344�ļ򵥰� 

�ȴ�С����һ�ţ���һ��һ����

�ؼ��ʣ����� 
*/ 
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[100],b[100];//����������ɵ��� 
    int n;//��������ĸ��� 
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>n) 
    {
        if(n==0)break;

        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<n;i++)cin>>a[i];//���� 
    
        sort(a,a+n);
        sort(b,b+n);//�����ǵ����������� 
    
        int point=0;//ָ�������ĵ�һƥ�� 
        for(int i=0;i<n && point<n;i++)//������ɵ���
            if(b[i]>a[point])point++;//point������������ܵ���ĸ��� 
        
        cout<<point<<endl;
    }
    //return 0;
}
