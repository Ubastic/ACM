/*
������໯ѧʽ�������еĻ�ѧҩƷ���ֵ�˳�����ͨ����Щ��ѧʽ���Բ���������ҩƷ

���������Ǹ����鷳�����⣬���ǲ��ѣ�һ��һ������������
���������Ժ��ģ�⣬һ��һ����ö�١�һ��һ����ظ�ֱ��ĳһ�α������л�ѧʽ��û�������ʲ�����

�ؼ��ʣ�ģ�⣬�ַ�����STL 
*/
#include<iostream>
#include<set>
#include<vector> 
using namespace std;

int main()
{
    //freopen("10","r",stdin);
    
    set<string> have;//��ʾ�����е�ҩƷ 
    set<string> news;//��������ģ���Ϊ���ֻҪ����������ɵ� 
    vector<string> reactant[2][400];//[0][i]��ʾ��i����ѧʽ�ķ�Ӧ���б�[1][i]��ʾ��i����ѧʽ���������б� 
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s,a;
        cin>>s;
        bool flag=0;
        
        while(s.length()>0)
        {
            char c=*s.begin();
            s.erase(s.begin());
            
            if(c=='=')
            {
                reactant[flag][i].push_back(a);
                a.clear();
                flag=1;
            }
            else if(c=='+')
            {
                reactant[flag][i].push_back(a);
                a.clear();
            }
            else a.push_back(c);
        }
        reactant[flag][i].push_back(a);
    }//���뻯ѧʽ 
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        have.insert(s);
    }//�������л�ѧҩƷ
    news=have;
    
    bool judge[400]={false};
    bool flag=true;
    while(flag==true)
    {
        flag=false;
        for(int i=0;i<n;i++)
        {
            if(judge[i]==false)
            {
                for(int j=0;j<reactant[0][i].size();j++)
                    if(have.find(reactant[0][i][j])==have.end())goto end;
                //�ж��ǲ��Ƿ�Ӧ�ﶼ��    
                for(int j=0;j<reactant[1][i].size();j++)
                    have.insert(reactant[1][i][j]);
                //��������Ҳ�ӵ�Ŀǰ���е��б�    
                flag=true;
                judge[i]=true;
            }
            end:;
        }
    }
    
    set<string>::iterator it;
    for(it=news.begin();it!=news.end();it++)
        have.erase(*it);
    
    cout<<have.size()<<endl;
    for(it=have.begin();it!=have.end();it++)
        cout<<*it<<endl;
        
    //while(1);
}
