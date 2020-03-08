#include<iostream>   
using namespace std;

void   process();//���Ĺ���   
void   press(int,int);//�������Ĺ���   
void   output();//������

int   lights[5][6];//��¼��״̬��0��1��   
int   ans[5][6];//��¼���������x��y�е����ans[x-1][y-1]=1  

int   main()
{     //������   
 int   n;           
 cin>>n;   
 for(int   i=1;i<=n;i++)
 {   
  cout<<   "PUZZLE #"   <<i<<endl;   
  process();   //����������   
 }   
}  

void   press(int   x,int   y)   
{//�������Ĺ���   
 ans[x][y]=1;//��¼����   
 lights[x][y]=1-lights[x][y];   
 if(x>0)
  lights[x-1][y]=1-lights[x-1][y];   
 if(y>0)
  lights[x][y-1]=1-lights[x][y-1];   
 if(x<4)
  lights[x+1][y]=1-lights[x+1][y];   
 if(y<5)
  lights[x][y+1]=1-lights[x][y+1];   
}  

void   process()
{   
 int   x,y,z,temp[5][6];   
 for(x=0;x<5;x++)   
  for(y=0;y<6;y++)
   cin>>temp[x][y];   


 for(z=0;z<64;z++)
 {//��ѭ��,ö��64��״̬

  memcpy(lights,temp,sizeof(lights));   
  memset(ans,0,sizeof(ans));//��ʼ��  
  
  for(y=0;y<6;y++)   
   if(z   &   (1<<y))/*���z�����y��bitλ�ǡ�1�����ڵ�1��y�е��*/  
    press(0,y);//ö�ٵ�һ�е�64�ֲ�����
  
  
    
  
  for(x=1;x<5;x++)   
   for(y=0;y<6;y++)   
    if(lights[x-1][y]==1)
     press(x,y);/*���Ǹղ���˵�Ĺ���*/  

 

  for(y=0;y<6;y++)
   if(lights[4][y]==1)
    break;   //�ж����һ���Ƿ�ȫ��

  if(y>=6)
  {    
   output();
   break;  
  }   //��,����������������   
 }   
}   
void   output()
{   
 int   x,y;   
 for(x=0;x<5;x++)
 {   
  cout<<ans[x][0];   
  for(y=1;y<6;y++)
   cout<<" "<<ans[x][y];   
  cout<<endl;   
 }   
}