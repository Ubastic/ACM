/*
һ����Ϸ�����棬����һ�顣��֪�������˵���Ӯ������������˵�

��Ϊÿ���涼������������Ӯ������ÿ���˵���Ӯ����֮����ȣ�Ϊ��ľ���
���ĸ���Ӯ�ô���������Ĵ���
d1+d2=a1+a2;
a1+b1+c1+d1=a2+b2+c2+d2;
���d1,d2����

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2;
    while(cin>>a1>>a2>>b1>>b2>>c1>>c2)
    {
        if(a1==0 && a2==0 && b1==0 && b2==0 && c1==0 && c2==0)break;
        
        int total=a1+a2;
        int minus=a2-a1+b2-b1+c2-c1;
        d1=(total+minus)/2;
        d2=(total-minus)/2;
        
        printf("Anna's won-loss record is %d-%d.\n",d1,d2);
    }
}
