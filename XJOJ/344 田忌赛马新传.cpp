/*
�ȴ�С����һ�ţ���һ��һ����

�ؼ��ʣ����� 
*/ 
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[1000],b[1000];//����������ɵ��� 
    int m,n;//��������ĸ��� 
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>m;
    for(int i=0;i<m;i++)cin>>a[i];
    cin>>n;
    for(int i=0;i<n;i++)cin>>b[i];//���� 
    
    sort(a,a+m);
    sort(b,b+n);//�����ǵ����������� 
    
    int point=0;//ָ�������ĵ�һƥ�� 
    for(int i=0;i<n && point<m;i++)//������ɵ���
        if(b[i]>a[point]){point++;continue;}//point������������ܵ���ĸ��� 
        
    cout<<point;
    
    //while(1);
    return 0;
}
