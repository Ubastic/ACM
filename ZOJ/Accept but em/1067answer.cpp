/*
��Ŀ���⣺

�ҳ���ɫ�������RGBֵ����һ����ʽ�����ǵ���������RGBֵ������Ϊ���и����Ǹ���ʽ��

��Ŀ�����16��RGBֵ��Ȼ��ʣ�µ�����ÿ����һ��RGBֵ��ÿ�����Ԥ�ȸ�����16��RGBֵ�����RGBֵ�������һ�顣������-1��-1��-1ʱ��ֹ��

˼·��

��ÿ��������һ��ѭ��������16��RGBֵ�����ÿ����࣬Ȼ��͵�ǰ��С���Ƚϣ����С�ڲ�࣬���Ϊ��ǰ��С��ࡣ
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int color[16][3];
 int rgb[3];
 int r,g,b;
 int i,d,t;
 for (i=0;i<16;i++)
 {
  cin>>color[i][0];
  cin>>color[i][1];
  cin>>color[i][2];
 }
 while (cin>>r>>g>>b)
 {
  if (r==-1&&g==-1&&b==-1)
   break;
  t=422;
  for (i=0;i<16;i++)
  {
   d=sqrt((r-color[i][0])*(r-color[i][0])+(g-color[i][1])*(g-color[i][1])+(b-color[i][2])*(b-color[i][2]));
   if (d<t)
   {
    t=d;
    rgb[0]=color[i][0];
    rgb[1]=color[i][1];
    rgb[2]=color[i][2];
   }
  }
  cout<<"("<<r<<","<<g<<","<<b<<") maps to ("<<rgb[0]<<","<<rgb[1]<<","<<rgb[2]<<")\n";
 }
 return 0;
}