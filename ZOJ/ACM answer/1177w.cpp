#include<iostream>//Ҫ��һ����С��������������������N:N=M*4,����M�ǽ�N�ĵ�һλ�Ƶ����һλ�������λһ����һ�Ľ����
#include<string>
using namespace std;
#define maxv (10000+5) 
bool used[10][maxv];
char s[maxv*20],best[maxv*20];
int k;
bool com(char *a,char *b)//�ȽϺ���
{
	int i;
    int la=strlen(a),lb=strlen(b);
	if(la<lb) 
		return 1;
	else if(la>lb)
	{
		
			return 0;
	}
	else for(i=la-1;i>=0;i--)
	{
		if(a[i]<b[i])
			return 1;
		else if(a[i]>b[i])
			return 0;
	}
	return 0;
}
bool magic(int nu)
{
	int i,ca,pre=nu;
	i=ca=0;
	memset(used,0,sizeof(used));
	while(!used[nu][ca])
	{
		used[nu][ca]=1;
		s[i]=(nu*k+ca)%10+'0';
		ca=(nu*k+ca)/10;
		nu=s[i++]-'0';
	}
	s[i]='\0';
	if(nu==pre&&ca==0)
		return 1;
	return 0;
}
int main()
{
	int i,cas;
	cin>>cas;
	while(cas--)
	{
		cin>>k;
		best[0]=0;
		for(i=1;i<10;i++)//��1��9ö��
		{
			if(magic(i)&&(!best[0]||com(s,best)))//�������������Ŀǰ��С��
				strcpy(best,s);
		}
		for(i=strlen(best)-1;i>=0;i--)
			putchar(best[i]);
		cout<<endl;
		if(cas)
			cout<<endl;
	}
	return 0;
}