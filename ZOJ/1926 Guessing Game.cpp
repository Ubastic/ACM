/*
��һ��1��10�����֣���������˻���С�˵���Ϸ�����ڸ���һ���µĹ��̣��ж��������Ƿ�����

����һ������Ϊ10�Ĳ������飬���ݹ��̻����񶨵����֣���������ȷ��Ϊ�ѱ��񶨵�������˵��������

�ؼ��ʣ�
*/
#include<iostream>
using namespace std;

int main()
{
    char response[20];
    int a,dim[11];
    
    //freopen("aaa.txt","r",stdin);

    while(1)
    {
        memset(dim,0,sizeof(dim));
        
        do
        {
            cin>>a;
            if(a==0)return 0;
            cin>>response>>response+10;
            
            if(response[10]=='h')
                for(int i=a;i<=10;i++)dim[i]=1;    //�����񶨵�����
            if(response[10]=='l')
                for(int i=a;i>=1;i--)dim[i]=1;     //�����񶨵�����
        }
        while(response[0]=='t');
        
        if(dim[a]==0)cout<<"Stan may be honest"<<endl;
                     else cout<<"Stan is dishonest"<<endl;
    }

}

