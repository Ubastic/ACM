// ���ݵ��迹1/jwc,������迹r,���ݺ͵������λ��Ϊ90�ȣ��������迹Ϊ
// sqrt(r*r+1/(w*w*c*c))
// ���������ʽ��Ϊ
// vr=vs/sqrt(r*r+1/(w*w*c*c))*r;

#include <stdio.h>
#include <math.h>
int main()
{
	float vr,vs,r,w,c;
	int cas;
	scanf("%f%f%f%d",&vs,&r,&c,&cas);
	while(cas--)
	{
		scanf("%f",&w);
		vr=vs/sqrt(r*r+1/(w*w*c*c))*r;
		printf("%.3f\n",vr);
	}
	return 0;
}
