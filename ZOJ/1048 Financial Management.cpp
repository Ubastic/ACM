/*
����ʮ����ʵ������ƽ��������ȷ��С�������λ

û��˵

�ؼ��ʣ�����
*/
#include <iostream>
using namespace std;

int main()
{
     double sum=0,b;
     
     for(int i=0;i<12;i++)
     {
          cin>>b;
          sum+=b;
     }

     printf("$%.2f",sum/12);

     return 0;
}
