/*
14C��̼14���İ�˥����5730�꣬ÿ��ÿСʱ����810����λ�ķ��������һ�����ʵķ����ﺬ��������������

year=log(1/2,x/810)*5730������1/2�ǵ�����x�����ڵķ����ﺬ����������ǣ�year=log(810*w/d)/log(2)*5730����������������ݻ���һ��Ҫ��

�ؼ��ʣ�����
*/
#include<iostream> 
#include<cmath> 
using namespace std;

int main()
{ 
    double w,d;
    int count=1,year;
    
    while(cin>>w>>d,w!=0)
    { 
        year=log10(810*w/d)/log10(2)*5730;   //�׹�ʽ���㼴��
        
        if (year<10000)year=(year+50)/100*100; 
                  else year=(year+500)/1000*1000;  //��������ݵġ��������롱
            
        printf("Sample #%d\nThe approximate age is %d years.\n\n",count++,year);
    }
    
    return 0; 
}
