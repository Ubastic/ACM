/*
Ҫ��N��λ���������װ�ɳ����壬����С�����

ö�ٷֽ�N�ĳ���ߣ���¼�������С�Ľⷨ����

�ؼ��ʣ�ö�٣����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int C,N;
    cin>>C;
    while(cin>>N)
    {
        int surface=INT_MAX;
        for(int i=1;i*i*i<=N;i++)
            for(int j=i;i*j*j<=N;j++)
                if(N%(i*j)==0)
                {
                    int k=N/(i*j);
                    surface=min(surface,i*j+j*k+i*k);
                }
        cout<<2*surface<<endl;
    }
}
