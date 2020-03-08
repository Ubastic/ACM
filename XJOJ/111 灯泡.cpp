/*
��һ�����ݵ�״̬��ÿ��һ�룬ÿ���Ƶ�״̬�ͱ�Ϊ������һ���Ƶ������m������еƵ�״̬

�ҹ���
ʱ��1ʱ
  		����1:s[1] xor s[2]
  		����2:s[2] xor s[3]
  		����3:s[3] xor s[4]
  		����4:s[4] xor s[1]
ʱ��2ʱ
  		����1:(s[1] xor s[2]) xor (s[2] xor s[3])=s[1] xor s[3]
  		����2:(s[2] xor s[3]) xor (s[3] xor s[4])=s[2] xor s[4]
  		����3:(s[3] xor s[4]) xor (s[4] xor s[1])=s[3] xor s[1]
  		����4:(s[4] xor s[1]) xor (s[1] xor s[2])=s[4] xor s[2]
�����ǣ�2^k���״̬�ǵ�ǰÿ��������2^k����Ƶ����
�ҵ��˹��ɾͺð��ˣ���ʱ��m�ֽ�Ϊ�������2^k�ĺͣ������ƣ�
Ȼ���ټ���

�ؼ��ʣ����㷨 
*/
#include<iostream>
#define MAX 1000000
using namespace std;

int result[MAX],a[MAX];

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    memcpy(result,a,sizeof(int)*n);
    while(m>0)
    {
       int t=1;
       while(t*2<=m)t*=2;
       
       for(int i=0;i<n;i++)
           result[i]=a[i]^a[(i+t)%n];
           
       memcpy(a,result,sizeof(int)*n);
       m-=t;       
    }
    
    for(int i=0;i<n;i++)
        cout<<result[i]<<endl;
        
    return 0;
}
