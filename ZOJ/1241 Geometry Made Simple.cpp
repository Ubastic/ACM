/*
����ֱ�����������߳�������һ�ߡ���4,-1,5��������Ϊб�ߣ�-1��Ϊ������

�úܶ�if

�ؼ��ʣ����⣬��ѧ�� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c;
    int n=0;
    
    //freopen("aaa.txt","r",stdin);
    
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0)break;
        
        n++;
        if(a==-1)  //��a�ı߳� 
        {
            if(b>c)//�����ܵ���� 
            {
                cout<<"Triangle #"<<n<<endl;
                cout<<"Impossible."<<endl<<endl;
            }
            else
            { 
                cout<<"Triangle #"<<n<<endl;
                printf("a = %.3f\n\n",sqrt(c*c-b*b));
            }
        }
        else if(b==-1)  //��b�ı߳� 
        {
            if(a>c)//�����ܵ���� 
            {
                cout<<"Triangle #"<<n<<endl;
                cout<<"Impossible."<<endl<<endl;
            }
            else
            { 
                cout<<"Triangle #"<<n<<endl;
                printf("b = %.3f\n\n",sqrt(c*c-a*a));
            }
        }
        else   //��c�ı߳� 
        {
            cout<<"Triangle #"<<n<<endl;
            printf("c = %.3f\n\n",sqrt(a*a+b*b));
        }
    }
    
    
    
    
    //while(1);
    return 0;
}

