/*
����һ�������������M�η�%2011�ķ���

ֱ��д�������࣬Ӳ����ȡģ���ܵȵ������ȡ��Ҫ�����ȡ

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
#include<cstring>
using namespace std;

int n,m;

struct Matrix
{
    int element[30][30];
    
    Matrix(){memset(element,0,sizeof(element));}
    friend istream& operator >>(istream& input,Matrix& t)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                input>>t.element[i][j];
        return input;
    }
    friend ostream& operator <<(ostream& output,Matrix& t)
    {
        for(int i=0;i<n;i++)
        {
            output<<t.element[i][0];
            for(int j=1;j<n;j++)
                output<<' '<<t.element[i][j];
            output<<endl;
        }
        return output;
    }
    Matrix operator *(Matrix t)
    {
        Matrix temp;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                    temp.element[i][j]+=(element[i][k]*t.element[k][j])%2011;
                temp.element[i][j]%=2011;
            }
        return temp;
    }
    void operator *=(Matrix t){*this=*this*t;}
};

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        Matrix fuck,result;
        cin>>fuck;
        result=fuck;

        for(int i=1;i<m;i++)
            result=result*fuck;
        
        cout<<result<<endl;
    }
    
    //while(1);
}
