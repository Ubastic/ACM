/*
��ʦ��ÿ���˷�һ�������ճ���������󳤷��壬�и��������˵�ճ��
��ʦͨ����ÿ���˳�����ĳߴ�ȷ��˭��˭��

ֱ��ģ���������������ƽ��ÿ�˵�ճ�����ٿ�˭��ƽ���࣬˭��ƽ����
Ҳ���԰�ÿ���˵����������������С��

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

struct Student
{
    int a,b,c;
    int v;
    string name;
    
    void input()
    {
        cin>>a>>b>>c;
        cin>>name;
        v=a*b*c;
    }
};

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)break;
        
        Student s[10];
        for(int i=0;i<n;i++)
            s[i].input();
            
        double average=0;
        for(int i=0;i<n;i++)
            average+=s[i].v;
        average/=double(n);
        
        Student s1,s2;
        for(int i=0;i<n;i++)
        {
            if(s[i].v>average)s1=s[i];
            if(s[i].v<average)s2=s[i];
        }
        cout<<s1.name<<" took clay from "<<s2.name<<"."<<endl;
    }
}
