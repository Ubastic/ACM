/*
�ж��ַ���a���ַ���b�г����˶��ٴΣ�a�ǿ������������

��һ����������ĸ���ĸ�����˶��ٴΣ��Լ�һ���м�����ĸ
���ַ���b��ÿ�¼�һ����ĸ����ȥ��һ��β������ĸ�������¼ӵ���ĸ�����������key��b++
��ȥ����ĸ���ԭ����������key��b--
������һ�������ҵ�һ�� 

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int length1,length2;
    cin>>length1>>length2;
    string key,str;
    cin>>key>>str;

    int a[256]={0},b[256]={0};
    int a_t=0,b_t=0;
    int count=0;
    
    for(int i=0;i<length1;i++)
        a[key[i]]++;
    for(int i=0;i<256;i++)
        if(a[i]>0)a_t++;
        
    for(int i=0;i<length2;i++)
    {
        b[str[i]]++;
        if(b[str[i]]==a[str[i]])b_t++;
        
        if(i>=length1)
        {
            if(b[str[i-length1]]==a[str[i-length1]])b_t--;
            b[str[i-length1]]--;
        }
        
        if(a_t==b_t)count++;
    }
    
    cout<<count;
    //while(1);
}
