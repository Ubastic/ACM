//�ҹ��ɣ�����i+1����ż����ʱ�������Ľ���ǵ�i�������2����1
//����i+1����������ʱ�������Ľ���ǵ�i�������2����1
//��0 1 1 3 5 11 21 43��������
#include <stdio.h>
int a[1001][350];
int main()
{
	int i,j,t,n;
	for(i=0;i<350;i++)
		a[1][i]=0;
	for(i=2;i<1001;i++)
	{
		if(i%2==0) 	a[i][0]=a[i-1][0]*2+1;
		else a[i][0]=a[i-1][0]*2-1;
		t=a[i][0]/10;
		if(a[i][0]>9)
		{
			a[i][0]=a[i][0]%10;
		}
		for(j=1;j<350;j++)
		{
			a[i][j]=a[i-1][j]*2+t;
			t=a[i][j]/10;
			if(a[i][j]>9) a[i][j]=a[i][j]%10;
		}
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n==1) {printf("0\n");continue;}
		for(i=349;;i--)
		{
			if(a[n][i]!=0) break;
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",a[n][j]);
		}
		printf("\n");
	}
	return 0;
}		
