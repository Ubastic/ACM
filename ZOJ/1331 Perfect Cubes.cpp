/*
�������a^3=b^3+c^3+d^3��a<=200,b,c,d>1�����������⣬��a,b,c,d��������

���ĸ�forѭ����٣�Ϊ��ʡʱ�䣬�����������1��200������ֵ

�ؼ��ʣ���ѧ�⣬����
*/
#include<iostream>
using namespace std;

int main()
{
    int cube[201];
    int a,b,c,d;
    
    for(int i=1;i<=200;i++)
        cube[i]=i*i*i;         //���ȴ���������ֵ

    for(a=2;a<=200;a++)        //a��2��200
        for(b=2;b<a;b++)       //b,c,d<a��b<=c<=d
            for(c=b;c<a;c++)
                for(d=c;d<a;d++)
                    if(cube[a]==cube[b]+cube[c]+cube[d])printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);

    //while(1);
    return 0;
}
