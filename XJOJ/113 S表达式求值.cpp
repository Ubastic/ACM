/*
�����ַ��������ַ�����ʾ��ֵ

�ݹ�������������ĵݹ麯���Ͷ���~���Ǻ��ѣ�ע����һ�����ű���bracket��¼���������ŵĵڼ��� 

�ؼ��ʣ��ݹ飬�ַ��� 
*/
#include<iostream>
using namespace std;

int value(char s[])
{
    char left[2000]={0},right[2000]={0};
    int bracket=0,position=-1;
    
    int length=strlen(s);
    for(int i=0;i<length;i++)
    {
        if(s[i]=='(')bracket++;
        if(s[i]==')')bracket--;
        if(s[i]==',' && bracket==1)position=i;//������������ŵĶ��ŵ�λ�� 
    }
    if(position==-1)return atoi(s);
    
    strncpy(left,s+4,position-4);
    strncpy(right,s+position+1,length-position-2);
    
    if(s[1]=='d')return value(left)+value(right);//add
    if(s[1]=='i')return min(value(left),value(right));//min
    if(s[1]=='a')return max(value(left),value(right));//max
}

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int t;
    cin>>t;
    cout<<t<<endl;
    
    while(t--)
    {
        char s[2000];
        cin>>s;
        cout<<value(s)<<endl;
    }
    
    //while(1);
}
    
