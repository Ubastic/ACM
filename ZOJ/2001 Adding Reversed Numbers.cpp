/*
���⣬���������������֣�����������ǵĺ�

�Ǹ߾��ȼӷ���ԭ��������������ַ����ĵ�һλ�Ǹ�λ���ڶ�λ��ʮλ������
���Զ��벢���
ʡ��ǰ�����������Ϳ�����

�ؼ��ʣ��߾��ȼӷ�
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    while(n--)
    {
        char a[100]={0},b[100]={0};
        cin>>a>>b;

        int length_a=strlen(a),length_b=strlen(b);
        
        for(int i=0;i<length_a;i++)
            a[i]-='0';
        for(int i=0;i<length_b;i++)
            b[i]-='0';
        for(int i=0;i<100;i++)
            a[i]+=b[i];//��b�ӵ�a 

        for(int i=0;i<99;i++)
            if(a[i]>=10)
            {
                a[i]-=10;
                a[i+1]++;
            }//��λ 
        
        int length;
        for(int i=99;i>=0;i--)
            if(a[i]!=0){length=i+1;break;}
        for(int i=0;i<length;i++)
            if(a[i]!=0)
            {
                for(int j=i;j<length;j++)
                    cout<<char(a[j]+'0');
                cout<<endl;
                break;
            }//��� 
    }
    return 0;
}
