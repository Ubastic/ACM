#include<iostream>
#include<algorithm>
using namespace std;
//���ȶ���ö�ٵ�k���ֵ��Ȼ�����һ��boy������ö��girl���ҵ�����>=midʱ���±�
//ͳ�ƴ��ڵ��ڵĸ����������k������ö�ٷ�Χ����֮��С
//������׸�ѭ�����׸�С���ּ��ɣ�ע��ϸ�� 
bool cmp(int x,int y){return x>y;}
int n,m;
int b[100005],g[100005];
int main()
{
    int i,j,k,t,l,r;
    long long left,right,mid,tmp,sum,ans,key;
    while(cin>>n>>m>>key)
    {
          for(i=1;i<=n;i++)scanf("%d",&b[i]);
          for(i=1;i<=m;i++)scanf("%d",&g[i]);
          
          sort(b+1,b+n+1,cmp);
          sort(g+1,g+m+1,cmp);
          
          left=1ll*b[n]*g[m];right=1ll*b[1]*g[1]; 
          ans=left;
          while(left<=right)//����ö�ٵ�k��ֵ 
          {
                mid=(left+right)/2;
                sum=0;
                for(i=1;i<=n;i++)//ͳ�Ʊ�mid��ĸ��� 
                {
                    l=1;r=m;
                    t=0;
                    while(l<=r)
                    {
                          k=(l+r)/2;
                          if((1ll*b[i]*g[k])>=mid){t=k;l=k+1;}//̫���� 
                          else r=k-1;//������     
                          }             
                    sum+=t;      
                    }
                if(sum>=key){ans=mid;left=mid+1;}
                else right=mid-1;                
                }                        
          cout<<ans<<endl;      
          }
    return 0;
    }
