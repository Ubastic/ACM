/*
����һ����λ���ڵ�a��������Ҫ��ת����b�����������������λ���ERROR��2<=a,b<=16

���ַ�����ȡ���֣���ת��Ϊ����r�����ת��Ϊ�������

�ؼ��ʣ�����ת��
*/
#include <iostream> 
#include <string> 
using namespace std; 

int main()
{ 
    int base_1,base_2; 
    int r=0; 
    string num; 
    
    while(cin>>num>>base_1>>base_2)
    { 
        for(int i=0;i<num.size();i++)
            if(num[i]>='0'&&num[i]<='9')r=r*base_1+num[i]-'0'; 
                                   else r=r*base_1+num[i]-'A'+10;    //ת����rΪ���������
        string strr;
        
        while(r!=0)
        { 
            int temp=r%base_2;
            if(temp<=9)strr=(char)(temp+'0')+strr; 
                  else strr=(char)(temp+'A'-10)+strr; 
            r/=base_2;                                               //��rת����base_2���ƣ�����strr
        } 
        
        cout.width(7);
        if(strr.size()<=7)cout<<strr<<endl;
                     else cout<<"ERROR"<<endl; 
    } 
    return 0; 
} 
