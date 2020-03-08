/*
����a���Ƶ������ַ���������b���������2<=a,b<=62

����ת������ӵ����ˣ�����һ���࣬�ͱȽϺñ��� 

�ؼ��ʣ�����ת�� 
*/
#include<iostream>
#include<string>
using namespace std;

class BASE
{
    public:
        void input(void);
        void convert(void);
        void output(void);
    private:
        int in_base,out_base;
        int length;
        char num[200];
        int con[200],len_con;
        int result[200],len_result;
        int mod_divide(int x);//��ԭ������x�������� 
};

int main()
{
    int testcase;
    cin>>testcase;
    
    while(testcase--)
    {
        BASE base;
        base.input();
        base.convert();
        base.output();
    }

    return 0;
} 


void BASE::input(void)
{
    cin>>in_base>>out_base;
    cin>>num;
    len_con=length=strlen(num);
            
    for(int i=0;i<length;i++)
    {
        if(num[i]>='0'&&num[i]<='9')con[i]=num[i]-'0';
        else if(num[i]>='A'&&num[i]<='Z')con[i]=num[i]-'A'+10;
        else if(num[i]>='a'&&num[i]<='z')con[i]=num[i]-'a'+36;
    }//��ÿ����ĸת��Ϊ������Ӧ��ֵ 
}

void BASE::convert(void)
{
    len_result=0;
            
    while(len_con>0)
    {
        int m=mod_divide(out_base);//��ԭ������Ȩ�������� 
        result[len_result++]=m;//���¸�λ
    }//ת������ 
}

int BASE::mod_divide(int x)
{
    con[len_con]=0;//����λ���� 
    for(int i=0;i<len_con;i++)
    {
        con[i+1]+=(con[i]%x)*in_base;
        con[i]/=x;
    }
    int m=con[len_con]/in_base;//m������ 
       
    int k;
    for(k=0;con[k]==0;k++);//�����������˼�����
    for(int i=0;i<len_con-k;i++)con[i]=con[i+k];
    len_con-=k;
     
    return m;
}//��ԭ������x�������� 

void BASE::output(void)
{
    cout<<in_base<<' '<<num<<endl;
    cout<<out_base<<' ';
    for(int i=len_result-1;i>=0;i--)
    {
        if(result[i]>=0&&result[i]<=9)cout<<char(result[i]+'0');
        else if(result[i]>=10&&result[i]<=35)cout<<char(result[i]-10+'A');
        else if(result[i]>=36&&result[i]<=61)cout<<char(result[i]-36+'a');
    }
    cout<<endl<<endl;
}
