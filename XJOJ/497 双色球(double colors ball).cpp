/*
������Ĳ�Ʊ����󿪽��ĺ��룬���н�����Ƕ���

ģ��������ֱ����
�����տ����жϵ�ʱ�����ֱ����n^2���Ӷ�ȥ����ƥ��
û��Ҫ�Ż������Ե�

�ؼ��ʣ�ģ���⣬���� 
*/
#include<iostream>
using namespace std;

int check(int number[],int final[])
{
	int red=0,blue=0;
	for(int i=0;i<6;i++)
		for(int j=0;j<6;j++)
			if(number[i]==final[j])red++;	
	if(number[6]==final[6])blue++;
	
	if(red==6 && blue==1)return 5000000;
	if(red==6 && blue==0)return 10000;
	if(red==5 && blue==1)return 3000;
	if(red+blue==5)return 200;
	if(red+blue==4)return 10;
	if(red+blue==3)return 5;
	else return 0;
}

int main()
{
    int T;
	cin>>T;
	while(T--)
    {
		int n;
        cin>>n;
        
		int number[1000][7]={0};
		for(int i=0;i<n;i++)
		    for(int j=0;j<7;j++)
                cin>>number[i][j];
                
        int final[7]={0};
		for(int i=0;i<7;i++)
			cin>>final[i];
			
		int money=0;
		for(int i=0;i<n;i++)
            money+=check(number[i],final);
		cout<<money<<endl;
	}
}

