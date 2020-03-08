/*
����ÿ���˵�ID������һ��ֵ���Ȱ�ֵ�����������ֵ��ͬ��ID���ֵ�˳����
���ID��������

�ṹ�嶨��һ�£����������ؼ���ð������

�ؼ��ʣ����⣬����
*/
#include<iostream>
#include<string>
using namespace std;

struct Data
{
    string ID;
    string acount;
    
    friend bool operator <(Data &a,Data &b);
};

bool operator <(Data &a,Data &b)
{
    if(a.acount.length()!=b.acount.length())
        return a.acount.length()<b.acount.length();
    else if(a.acount!=b.acount)
        return a.acount<b.acount;
    else 
        return a.ID>b.ID;
}

void swap(Data &a,Data &b)
{
    Data temp=a;
    a=b;
    b=temp;
}

int main()
{
    Data people[1000];
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>people[i].ID>>people[i].acount;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(people[i]<people[j])swap(people[i],people[j]);
            
    for(int i=0;i<n;i++)
        cout<<people[i].ID<<endl;
        
    //while(1);
    return 0;
}
