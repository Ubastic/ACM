/*
������ո�ļ��仰����ÿ�仰�е�ÿ�����ʷ�ת�������

��ʽ���鷳��������cin.get��һ�����һ�仰�����й�������鷢��
һ��һ���ַ��������ж�Ҳ��Щ�鷳
����һ��һ���ĵ��ʶ��룬�ٶ���һ���ַ��ж��ǿո��ǻس�

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int n,m;
    string word;

    cin>>n;
    while(n--)
    {
        cin>>m;
        while(m)
        {
            cin>>word;
            for(int i=word.size()-1;i>=0;i--)cout<<word[i];//����������� 
            
            if(getchar()=='\n'){m--;cout<<endl;}
                else cout<<' ';//�ж��ǻ��л��Ǽ��������һ������ 
        }
        
        if(n>0)cout<<endl;//ÿ����һ��testcase��س�һ�£����һ�����س� 
    }
    
    return 0;
}
