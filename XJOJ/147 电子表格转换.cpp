/*
��AA��Z��Excel���еı�ʾ����ʮ�������໥װ��

Excel���еı�ʾ����ʵ��ȨΪ1~26��26����
����ͨ��0~25��ͬ
������㷨������ȡģ������ʱ
0~25��ȡģ��0~25��ֵ
1~26��ȡģ��1~26��ֵ
0~25����������βȡ��
1~26����������������
֪���˷���ʵ�־Ͳ�����

�ؼ��ʣ�����ת�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        string number;
        cin>>number;
        
        if(number[0]>='A' && number[0]<='Z')
        {
            int result=0;
            unsigned long base=1;
            for(int i=number.length()-1;i>=0;i--)
            {
                result+=base*(number[i]-('A'-1));
                base*=26;
            }//��ĸ��Ϊʮ����ֵ 
            cout<<result<<endl;
        }
        else
        {
            int dec=0;
            unsigned long base=1;
            for(int i=number.length()-1;i>=0;i--)
            {
                dec+=base*(number[i]-'0');
                base*=10;
            }//ʮ�����ַ�����Ϊʮ�������� 
            
            char result[20]={0};
            int point=0;
            while(dec>0)
            {
                result[point]=dec%26;
                if(result[point]==0)result[point]+=26;
                dec-=result[point];
                dec/=26;
                result[point]+='A'-1;
                point++;
            }
            for(int i=strlen(result)-1;i>=0;i--)
                cout<<result[i];
            cout<<endl;
        }
    }
    return 0;
}
