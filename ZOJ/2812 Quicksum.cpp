/*
��һ�����ո��Ӣ���ַ�������sum[�ڼ����ַ�*�ڼ�����ĸ]���ո�ֵΪ��

��������ô

�ؼ��ʣ�����
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int sum; 
    char c[255];
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin.getline(c,256))   //����һ�����ո���ַ���
    {
        if(c[0]=='#')break;
            
        sum=0;
        for(int i=0;i<strlen(c);i++) 
            if(c[i]!=' ')sum+=(i+1)*(c[i]-'A'+1);
                
        cout<<sum<<endl;
    }
    
    return 0;
}

