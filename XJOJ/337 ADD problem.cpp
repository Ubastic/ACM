/*
���⣬���������������֣�����������ǵĺ�

�Ǹ߾��ȼӷ���ԭ��������������ַ����ĵ�һλ�Ǹ�λ���ڶ�λ��ʮλ������
���Զ��벢���
ʡ��ǰ�����������Ϳ�����

�ؼ��ʣ��߾��ȼӷ������� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[6]={0},b[5]={0};
    
    cin>>a>>b;
    
    for(int i=0;i<strlen(b);i++)
        a[i]+=b[i]-'0';//��b�ӵ�a 
    
    for(int i=0;i<strlen(a);i++)
        if(a[i]>'9')
        {
            a[i]-=10;
            if(a[i+1]==0)a[i+1]='1';
            else a[i+1]++;
        }//��λ 
        
    for(int i=0;i<strlen(a);i++)
        if(a[i]!='0'){cout<<a+i;break;}//��� 
    
    //while(1);
    return 0;
}
