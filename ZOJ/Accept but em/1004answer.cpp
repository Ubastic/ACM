/*���⣺

���������ַ�������һ�������룬�ڶ������������ջ�ķ�ʽ���������i��ʾ���룬o��ʾ������������io�⣬������Ŀ���ӡ�
˼·��

�Ⲣ��������һ���ַ����⣬׼ȷ��һ��ջ�Ļ����⣬��һ�γ�������STL��������Ȼ�ܺú�ǿ�󣬰�����ĿҪ��֪����Ŀ����������ģ��������Ƚ�ջ����ջ������ٿ��Ƿ���ϳ�ջ���������оͻ��ݵ���һ����������֤��ֱ���������ȫ�����ַ����ĳ���ʱ�����Ȼ��ԭ�ϴβ���������������
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

string s1,s2;
stack<char> cs;
vector<char> io;
int l;
void prints()
{
 for (int i=0;i<io.size();i++)
  cout<<io[i]<<" ";
 cout<<endl;
}
void dfs(int i,int o)
{
 if (i==l&&o==l)
  prints();
 if (i<l)
 {
  cs.push(s1[i]);
  io.push_back('i');
  dfs(i+1,o);
  cs.pop();
  io.pop_back();
 }
 if (o<i&&o<l&&cs.top()==s2[o])
 {
  char t=cs.top();
  cs.pop();
  io.push_back('o');
  dfs(i,o+1);
  cs.push(t);
  io.pop_back();
 }
}
int main()
{
 while (cin>>s1>>s2)
 {
  l=s1.length();
  string t1=s1,t2=s2;
  sort(t1.begin(),t1.end());
  sort(t2.begin(),t2.end());
  cout<<"[\n";
  if (t1==t2)
   dfs(0,0);
  cout<<"]\n";
 }
 return 0;
}