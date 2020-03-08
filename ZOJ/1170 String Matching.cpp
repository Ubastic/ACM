/*
�������ַ��������Ǿ�����ͬ�Ĵ�λ�õ���ͬ��ĸ�����ֵmax����������ʽ���max*2/(len1+len2)���ֵ

���μ��㲻ͬ��λ�õ���ֵ���ҳ����ĺ󰴸�ʽ�������
ע��ҪԼ�� 

�ؼ��ʣ��ַ��� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int gcd(int a,int b)
{   
    if (b != 0) 
    return gcd(b, a % b); 
    else return a;   
}//��С������ 

int main()
{   
    string word_a;
    string word_b;
    int numerator,denominator;
    
    while(cin>>word_a>>word_b)
    {   
        if(word_a=="-1")return 0;
        
        int len1=word_a.length();
        int len2=word_b.length();
        int max = 0;
        int sum = 0;

        for(int i=0;i<len1;i++)
            for(int j=0;j<len2;j++)  
                if(word_a[i]==word_b[j]) 
                { 
                    sum=1;
                    for(int g=1;g+j<len2&&g+i<len1;g++)
                        if(word_a[i+g]==word_b[j+g])sum++;        
                    if(sum>max)max=sum;    
                }

        if(max>0)
        { 
            numerator=max*2;
            denominator=len1+len2;
            int div=gcd(numerator,denominator);
            numerator/=div;
            denominator/=div;
            
            if(denominator!=1)cout<<"appx("<<word_a<<","<<word_b<<") = "<<numerator<<"/"<<denominator<<endl;
                else cout<<"appx("<<word_a<<","<<word_b<<") = "<<numerator<<endl;
        }
        else cout<<"appx("<<word_a<<","<<word_b<<") = 0"<<endl;
    }
}
