/*
��ΪL�Ļ�����ֻ�������Ϊx��y���ٶ�Ϊm��n��������ͬһ��ʼ�����ʶ೤ʱ����������

������ʱ��Ϊt����mt+x=nt+y(mod L) 
���������t��һ��ͬ�෽��(m-n)t=y-x(mod L)����С�Ǹ��� 
������һ��ͬ�෽�̵ĺ����ܳ���
����ͨ������Ҳ����
����t��0��L�����t>=L�϶��޽�

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int x,y,m,n,L;
    while(cin>>x>>y>>m>>n>>L)
    {
        for(int t=0;t<L;t++)
            if((m*t+x-n*t-y)%L==0)
            {
                cout<<t<<endl;
                goto end;
            }

        cout<<"Impossible"<<endl;
        end:;
    }
}
