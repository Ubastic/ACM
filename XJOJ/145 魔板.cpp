/*
�����������󣬿��Խ������У����߰�ĳһ��ȡ��
������������ɲ����Ի���ת��

ö��ÿһ�����ڵ�һ�е�������ѵ�һ�л��ĺ�Ŀ���һ��һ��
������������Ҳ��ԭ�������򣬿��Ƿ�һ��
��stringʵ���������˼�� 

�ؼ��ʣ����⣬��˼�� 
*/ 
#include<iostream>
#include<string>
#include<algorithm>
#define MAX 100
using namespace std;

int n,m;

string solve(string a[],string b[])
{
    sort(b+1,b+m);//���еܶ��е���m�� 
    string c[MAX];
    
    for(int column=0;column<m;column++)//ö��column�� 
    {
        for(int i=0;i<m;i++)
            c[i]=a[i];//��c=a 
            
        swap(c[0],c[column]);//�ѵ�column�л���ͷ�� 
        
        for(int i=0;i<n;i++)
            if(c[0][i]!=b[0][i]) 
                for(int j=1;j<m;j++)
                    if(c[j][i]=='0')c[j][i]='1';
                    else c[j][i]='0';//�б任��ʹ��һ����a�ĵ�һ����ͬ 
                    
        sort(c+1,c+m);//����c�ĵܶ��е���m��  
        
        bool flag=true;
        for (int i=1;i<m;i++)
            if(c[i]!=b[i])flag=false;
        if(flag==true)return "YES";//����bһ���� 
    }
    return "NO";
}

int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        cin>>n>>m;
        string a[MAX],b[MAX];
        
        char c;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) 
            {
                cin>>c;
                a[j].push_back(c);//ע���ǰ��д�ȡ 
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) 
            {
                cin>>c;
                b[j].push_back(c);
            }
            
        cout<<solve(a,b)<<endl;
    }
    return 0;
}
