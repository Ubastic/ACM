/*
���⣺

�������ɿ����������Ƿŵ�һЩ��������ӱ���װ�������Ҳ���һ��������ͬʱ�������ɿ������ɿ���������ʣ�ࡣ

�������һ���������ɿ���������

�ڶ������ж��ٸ�����

��������ÿ�����ӷŶ��ٸ��ɿ���

Ҫ������ܰ����Եĺ���ȫ��������������ŵ�һ���ɿ����ĺ���������Ȼ����ͬһ�н�������ֱ�����Щ���ӷŵĵ�һ���ɿ�����

������ܣ������Impossible to distribute

˼·��

DP�⣬����ͳ�ư����еĺ���ȫ��������Ҫ���ٸ��ɿ������������������ɿ���������϶��ǲ��ܵ�

Ȼ��ѭ��i��1��n

��ʾÿ�δ�i�����ӿ�ʼ����ţ���ѭ��j=i��n

��ʾ��i�����ӿ�ʼ�������ܷŵ�һ���ɿ����ĺ���ȫ������

jѭ����Ϻ��ж�ʣ��û�ŵ��ɿ�������������ڵڶ����ɿ�������˵����ǰ�ŵ�һ���ɿ����ķ������ԣ�����ѭ������������ѭ��

˫��ѭ����Ϻ���֤���iѭ��������n��˵��ÿһ�ַŵ�һ���ɿ����ķ��������ԣ�˵�����ܷ������ӡ�

�����������

���룺
*/
#include <iostream>
using namespace std;

int main()
{
 int m,l,n,sum,total,count;
 int c[2001],f[2001];
 int i,j;
 while (cin>>m>>l)
 {
  if (m==0&&l==0)
   break;
  cin>>n;
  sum=0;
  for (i=0;i<n;i++)
  {
   cin>>c[i];
   sum+=c[i];
  }
  if (sum>m+l)
  {
   cout<<"Impossible to distribute\n";
   continue;
  }
  for (i=0;i<n;i++)
  {
   total=0;
   count=0;
   memset(f,0,sizeof(f));
   for (j=i;j<n;j++)
   {
    if (c[j]+total>m)
     continue;
    total+=c[j];
    f[j]=1;
    count++;
   }
   if (sum-total<=l)
    break;
  }
  if (i==n)
   cout<<"Impossible to distribute\n";
  else
  {
   cout<<count;
   for (i=0;i<n;i++)
    if (f[i]==1)
     cout<<" "<<i+1;
   cout<<endl;
  }
 }
 return 0;
}