#include<iostream>//ѭ��ȡģ���õ�������ģ��������һ��ģ��һ�������������Good Choice������Bad Choice
#include<cstdio>
using namespace std;
int main()
{
	int step,mod;
	int i,h,x,seek;
	int flag[100001];//��־����������û���뵽��
	while(scanf("%d%d",&step,&mod)!=EOF)
	{	
		x=0;
	
		for(i=0;i<mod;i++)
			flag[i]=0;//���Ƚ�һ��ģ��һ�ı�־��Ϊ0
		h=step%mod;//��һ��ȡģ�ȼ�¼������Ϊѭ�������ı�־
		flag[h]=1;//�õ���ģ����־Ϊ1
		seek=h;//��ֵ����һ��ģ��
		while((seek+step)%mod!=h)//��ʼѭ��
		{
			flag[(seek+step)%mod]=1;//�õ���ģ����־Ϊһ
			seek=(seek+step)%mod;
		} 
		for(i=0;i<mod;i++)
		{
			if(flag[i]!=1)//�ж����ȫ����־Ϊ1��������������������
			{
				x=1;	
				break;
			}		
		}
		printf("%10d%10d",step,mod);//ע�������ʽ
		if(x==1)
			printf("    Bad Choice\n\n");
		else
			printf("    Good Choice\n\n");
	}
	return 0;
}
