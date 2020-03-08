/*
�����n���Թ���ferrersͼ�ĸ���

�����ѧ��������ֵ�����
�����Թ���ferrersͼ�ĸ����Ͱ�n��ֳɲ���ȵ������Ĳ������ͬ
֤�������Թ���ferrersͼ������һ��һ��һ��������������� 
���ԾͿ�n���Բ�ɶ����黥����ȵ�����
f[a][b]��ʾ��a��ɲ�����b�������Ĳ����
f[a][b]=sum(f[a-b][1],f[a-b][3]...f[a-b][k])����k<b
��ֵ��f[i][i]=1������i������������˵���ڶ�������i�����ǿ��Թ��ɲ���Ϊ1���Թ���ferrersͼ
���Ĵ𰸾���sum(f[n][i])������iС�ڵ���n 

�ؼ��ʣ���̬�滮�������ѧ
*/
#include<iostream>
using namespace std;

int main()
{
    long long f[501][501]={0};
    
    for(int i=1;i<=500;i+=2)
        f[i][i]=1;
    
    for(int i=1;i<=500;i++)
        for(int j=1;j<i;j+=2)
            for(int k=1;k<j;k+=2)
                f[i][j]+=f[i-j][k];
    
    int n;
    cin>>n;

    long long sum=0;
    for(int j=0;j<=n;j++)
        sum+=f[n][j];
    if(sum==0)cout<<"NO ANSWER"<<endl;
    else cout<<sum<<endl;

    //while(1);
}
