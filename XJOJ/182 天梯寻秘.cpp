/*
n��̨�ף�ÿ�������M��̨�ף����ж������߷�

�ö�̬�滮��˼�룬��ʵn��̨�׵��߷�����n-1,n-2...n-M��̨�׵��߷��ͣ��������һ����M���߷�
��ʵ��Ҳ���Ǹ�һ���Ե�쳲��������У�ÿһ����ǰM��ĺ�
�����������ܴ��쳲�����ֵ��
���ڶ������У���[F(n) F(n-1)]=[F(n-1) F(n-2)]*A
����A�Ƕ��׷���ͬ�������������У�Ҳ������ʽ��
A��һ������ʽ�ǵ�һ��Ϊ1���Խ����Ϸ�һ��Ϊ1������Ϊ0
���ƣ���[F(n) F(n-1) ...]=[F[0] F[-1] ...]*A^n
ע�⸺����Ĭ��ֵΪ0��F[0]=1������F(n)=A^n�����Ͻ�Ԫ�� 
ʣ�µ�������������������A^n
��nд�ɶ�������ʽ������n=21=16+4+1
��ôA^21=A^16*A^4*A^1
��һ��whileѭ����Aÿ���Լ�ƽ����Ȼ������n�����Ƶ�1�͸�result�ϳ˸�A
���Ӷ���O(log2 N)

�ؼ��ʣ���ѧ�����󣬺��⣬��˼�룬����쳲���������̬�滮 
*/
#include<iostream>
using namespace std;

struct Matrix
{
    int n;
    long long value[30][30];
    
    Matrix(int a=0):n(a){memset(value,0,sizeof(value));}
    
    void Init()
    {
        for(int i=0;i<n;i++)
        {
            value[i][0]=1;
            if(i+1<n)value[i][i+1]=1;
        }
    }
    
    Matrix Pow(long long k)
    {
        Matrix result(n);
        for(int i=0;i<n;i++)
            result.value[i][i]=1;
                
        Matrix temp=*this;
        
        while(k>0)
        {
            if(k%2==1)result*=temp;
            temp*=temp;
            k/=2;
        }
        return result;
    }
    
    void operator *=(Matrix t)
    {
        Matrix result(n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                    result.value[i][j]+=(value[i][k]*t.value[k][j])%9876543;
                result.value[i][j]%=9876543;
            }
        *this=result;
    }
};

int main()
{
    long long n;
    int M;
    cin>>n>>M;
    
    Matrix A(M);
    A.Init();
    A=A.Pow(n);
    
    cout<<A.value[0][0]<<endl;
}
