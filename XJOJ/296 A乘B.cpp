/*
�����������ִ���������ǵĳ˻�

���͵ĸ߾��ȼ��㣬�����Ȱ�����һ������0��9�ĳ˻��ֱ������
Ȼ��ֱ�ӼӾ�����
��λҲ���Եȵ�������û��Ҫÿ�ζ���λ

�ؼ��ʣ��߾��ȼ��� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[101],b[101];
    int result[201];
    int k[10][101];//���b�ֱ����0��9��ֵ
    
    while(cin>>a>>b)
    {
        memset(result,0,sizeof(result));
        memset(k,0,sizeof(k));
        
        for(int j=0;j<10;j++)
            for(int i=0;i<strlen(a);i++)
                k[j][i]=j*(a[i]-'0');

        for(int i=0;i<strlen(b);i++)
            for(int j=0;j<strlen(a);j++)
                result[j+i]+=k[b[i]-'0'][j];
                
        for(int i=strlen(a)+strlen(b)-2;i>0;i--)
            if(result[i]>=10)
            {
                result[i-1]+=result[i]/10;
                result[i]%=10;
            }
        for(int i=0;i<strlen(a)+strlen(b)-1;i++)
            cout<<result[i];
        cout<<endl;
    } 
    return 0;
}
