/*
�����i�����ֵ�type���������ĸ����ϣ���������Щ�Զ�����ҧ�ϣ������ϵͳ�Ƿ������������

���ȶ������ݣ�teeth[i]��ʾ��i�����ֵ��ͺţ�rod[i]��ʾ��i���������ĸ�����
ע��������ֵ��ͺű�ʾ�ٶȲ����8�ź�4�Ź̽ᣬ��������ٶȲ����Ƕ�����ϵ���������4 
disjoint�ǲ��鼯
Ȼ������ҧ�Ϲ�ϵ���ϵĸ������ݣ��ж��Ƿ�jammed

�ؼ��ʣ����鼯 
*/
#include<iostream>
#include<cstring>
using namespace std;

int disjoint[100000],v[100000]; 
bool zf[100000];//ת�ķ���

int find(int x)
{
    if(disjoint[x]==x)return x;
    else
    {
        int t=disjoint[x];
        disjoint[x]=find(disjoint[x]);
        v[x]+=v[t];
        zf[x]^=zf[t];
        return disjoint[x];
    }
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        int ng,nr,ni;
        cin>>ng>>nr>>ni;

        int teeth[100000],rod[100000];
        for(int i=0;i<ng;i++)
            cin>>teeth[i]>>rod[i];

        memset(v,0,sizeof(v));
        memset(zf,0,sizeof(zf));
        for(int i=0;i<nr;i++)disjoint[i]=i;//i<100000

        bool flag=true;
        for(int i=0;i<ni;i++)
        {
            int aj,bj;
            cin>>aj>>bj;
            if(flag==false)continue;//��ֱ���˳���Ϊ�˰����ݶ��꣬���ᵼ���Ժ����ݶ�ȡ���� 
            int x,y;
            x=find(rod[aj]);
            y=find(rod[bj]);
            if(x==y)
            {
                if((v[rod[aj]]-v[rod[bj]]!=teeth[aj]-teeth[bj])||(zf[rod[aj]]==zf[rod[bj]]))flag=false;
            }
            else
            {
                v[y]=v[rod[aj]]-v[rod[bj]]-(teeth[aj]-teeth[bj]);
                if(zf[rod[bj]]==zf[rod[aj]])zf[y]=1-zf[rod[aj]];
                disjoint[y]=disjoint[x];
            }
        }
        if(flag==true)cout<<"ok"<<endl;
        else cout<<"jammed"<<endl;
    }
    //while(1);
}
