/*
���ݵ���ʽL[n+1]=(Z*L[n]+I)%M������Z,L,I,M��ֵ����Lֵ��ѭ������  L<M<10000

�������飨ɸ������L���ֹ�����ֵ���������L����ʲôʱ�������L��ǰ���ֹ�
��Ҫע����L��ֵѭ��ʱ����һ��ѭ���س�ʼ��Lֵ������3,5,7,6,5,7,6,5,7,6...��������3

�ؼ��ʣ���ѧ��
*/
#include<iostream>
using namespace std;

int main()
{
    
    int z,i,m,l,count,cases=0;
    bool con[10000];
    
    while(cin>>z>>i>>m>>l)
    {
        if(m==0)break;
        memset(con,false,sizeof(con));
        
        while(con[l]==false)
        {
            con[l]=true;
            l=(z*l+i)%m;
        }                                 //�����ѭ�������
        
        memset(con,false,sizeof(con));
        count=0;
        while(con[l]==false)
        {
            con[l]=true;
            l=(z*l+i)%m;
            count++;
        }                                 //�����ѭ��������
        
        cout<<"Case "<<++cases<<": "<<count<<endl;
    }
    
    return 0;
    
}

