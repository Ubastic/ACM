/*
һ�����У���д��ÿ����ĺͣ���д��ÿ����Ĳ���һ��������ȵ������С��ٶ�ǰһ��ִ����ͬ�������Դ�����
��֪�������У���ԭ����

��������
5   2   3   2   5   7   9   6
7   5   12  15  3   1   -2  3
12  27  2   -3  3   1   -2  3
39  -15 2   -3  3   1   -2  3
�����Ƶ�ʱ���Ȱѵ�����ǰ������solute��ԭ
�ٰѵ����е�1,3��2,4�ԭ
����Ҫ��ԭ����Ҫ��1,3��2,4��λ�ñ��1,3,2,4�������sort�Ĺ���
ʵ�ֱȽ���Ҫ���ɣ����ǲ������

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

void solute(int &s,int &d)
{
    int a,b;
    a=(s+d)/2;
    b=(s-d)/2;
    s=a;d=b;
}//�������ĺ���Ϊԭ�� 

void sort(int start[],int length)
{
    int *p=new int [length];
    for(int i=0;i<length;i+=2)
        p[i]=start[i/2];
    for(int i=1;i<length;i+=2)
        p[i]=start[length/2+i/2];
    for(int i=0;i<length;i++)
        start[i]=p[i];
    delete p;
}//��ԭ����ǰһ���Ϊ�������һ���Ϊż���� 

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        int zip[256];
        for(int i=0;i<n;i++)
            cin>>zip[i];
            
        for(int i=1;i<n;i*=2)
        {
            for(int j=0;j<i;j++)
                solute(zip[j],zip[j+i]);
            sort(zip,i*2);
        }
                
        for(int i=0;i<n-1;i++)
            cout<<zip[i]<<' ';
        cout<<zip[n-1]<<endl;
    }
}
