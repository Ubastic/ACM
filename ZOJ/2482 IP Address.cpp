/*
�Ѹ���32λ��������ת��ΪIP��ַ��ʽ���

����32λ���ֳ��Ľڷֿ���
����niu[]������Խ�ʡ����2^n��ʱ��

�ؼ��ʣ����⣬����ת�� 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    char a;
    int niu[8]={128,64,32,16,8,4,2,1};
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>n;
    while(n--)
    {
        for(int i=0;i<4;i++)
        {
            sum=0;
            for(int j=0;j<8;j++)
            {
                cin>>a;
                if(a=='1')sum+=niu[j];
            }
            cout<<sum;
            if(i<3)cout<<".";
        }
        cout<<endl;
    }

    //while(1);
    return 0;
}

