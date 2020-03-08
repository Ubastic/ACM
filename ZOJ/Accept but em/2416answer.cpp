#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int n, b[10000], pi, si;
string s, p;
queue <string> sq, tq;

void init();   //��ʼ��
int stoi(string);   //�ַ���ת��Ϊ����
void bfs();   //�������
void print();   //��ӡ���

int main()
{
 //freopen("in.txt", "r", stdin);  //�ӹ̶��ļ��ж�����������
 cin >> n;  
 int i;
 for(i = 0; i < n; i ++)
 {
  cin >> s >> p;
  init();
  bfs();
  print();
 } 
 return 0;
}

void init()
{
 pi = stoi(p);
 si = stoi(s);
 memset(b, 0, sizeof(b));
 b[si] = 1;
 sq = tq;   //tq�����þ���������ʼ��sq!!!!!!!!
 sq.push(s);  //s����
}

int stoi(string str)
{
 int sum = 0, i;
 for(i = 0; i < 4; i ++)
 {
  sum *= 10;
  sum += str[i] - '0';
 }
 return sum;
}

void bfs()
{
 string ts, ss;
 int ti, ii, l, i;
 while(!sq.empty())//�ж����Ƿ��
 {
  ts = sq.front();
  ti = stoi(ts);
  l = b[ti];
  if(ti == pi) //���Ƿ��ҵ�
   break;
  for(i = 0; i < 3; i ++)  //���ֽ��� 
  {
   ss = ts;
   char tc = ss[i];
   ss[i] = ss[i + 1];
   ss[i + 1] = tc;
   ii = stoi(ss);
   if(!b[ii])
   {
    b[ii] = l + 1;
    sq.push(ss);
   }
  }
  for(i = 0; i < 4; i ++)  //����ԭλ����
  {
   ss = ts;
   ss[i] = (ss[i] != '9') ? ss[i] + 1 : '1';
   ii = stoi(ss);
   if(!b[ii])
   {
    b[ii] = l + 1;
    sq.push(ss);
   }
   ss = ts;
   ss[i] = (ss[i] != '1') ? ss[i] - 1 : '9';
   ii = stoi(ss);
   if(!b[ii])
   {
    b[ii] = l + 1;
    sq.push(ss);
   }
  }
  sq.pop();  
 }
}

void print()
{
 printf("%d\n", b[pi] - 1);
}