/*
�������εĳ��Ϳ���Բ�뾶�����Ƿ���԰�������Բ���ص��ķ��������

���ŷ�����һ��Բ�����ε����½ǣ�һ��Բ�����ε����Ͻǡ�������ɹ��ɶ���õ���
(r1+r2)^2=[a-(r1+r2)]^2+[b-(r1+r2)]^2

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int main()
{
    double a,b,r1,r2;

    while(cin>>a>>b>>r1>>r2)
    {
        if((r1+r2)*(r1+r2)<=(a-r1-r2)*(a-r1-r2)+(b-r1-r2)*(b-r1-r2))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
