/*
����һ���ַ�����������ַ��������⼸���ַ�������ϳ����ĵڼ���

��������ϼ��㣬��BANANA
��һλ��B�����Ա�BС����A��Ҳ����˵��BANANAС����A?????����������ַ���AABNN����5!/(2!*1!*2!)�ֽ��
�ٿ��ڶ�λ��A��û�б���С�ģ�����λ��N����BAA???-BAM???��Щ��������ÿһ��������������
�������Ǽ������Ϳ�����

�ؼ��ʣ�������� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    long long f[21]={1};
    for(int i=1;i<=20;i++)
        f[i]=f[i-1]*i;
    
    int T;
    cin>>T;
    while(T--)
    {    
        char str[21];
        cin>>str;
        int times[26]={0};
        for(int i=0;i<strlen(str);i++)
            times[str[i]-'A']++;
            
        long long sum=0;
        for(int idx=0;idx<strlen(str);idx++)
        {
            long long X=f[strlen(str)-idx-1],Y;
            for(int i=0;i<str[idx]-'A';i++)
            {
                if(times[i]>0)
                {
                    times[i]--;
                    Y=1;
                    for(int j=0;j<26;j++)Y*=f[times[j]];
                    sum+=X/Y;
                    times[i]++;
                }
            }
            times[str[idx]-'A']--;
        }
        cout<<sum<<endl;
    }
}
