/*
��ԭ�⣬01��������

���ܶ���f[n][m]�ڴ�����
�Ż��ռ临�Ӷ��Ժ���f[m]����ʾ����Ϊm�Ļ�����ܷŶ��ټ�ֵ�Ķ���
״̬ת�Ʒ��̣�f[v]=max(f[v],f[v-w[i]]+s[i])��ʾf[v]ȡ���ŵ�i����Ʒ�ͷŵ�i����Ʒ�����ַ��������ֵ
������Ż��ڴ�

�ؼ��ʣ���̬�滮��01�������� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int w[3402],s[3402];
    for(int i=0;i<n;i++)
        cin>>w[i]>>s[i];
        
    int f[12881]={0};
    for(int i=0;i<n;i++)
        for(int v=m;v>=0;v--)
            if(v>=w[i])
                f[v]=max(f[v],f[v-w[i]]+s[i]);
                
    cout<<f[m]<<endl;
    //while(1);
}
