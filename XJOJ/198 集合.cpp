/*
�����������ϣ��ж����������ϵĹ�ϵ

�ȶԼ���Ԫ�ؿ���
�ҳ����������ϵĽ���
���ݽ�����Ԫ������ԭ���������ϵ�Ԫ�����������ǵĹ�ϵ

�ؼ��ʣ����ϣ����� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c=0;
    int A[100000],B[100000],C[100000];
    
    //freopen("aaa.txt","r",stdin);
    
    cin>>a;
    for(int i=0;i<a;i++)scanf("%d",A+i);
    cin>>b;
    for(int i=0;i<b;i++)scanf("%d",B+i);
    sort(A,A+a);
    sort(B,B+b);
    
    for(int i=0,j=0;i<a;i++)
    {
        while(B[j]<A[i])
            j++;
        if(j>=b)break;
        if(A[i]==B[j]){C[c++]=A[i];j++;}
    }
    
    if(c==0)cout<<"A and B are disjoint";
    else if(c==a && c==b)cout<<"A equals B";
    else if(c==a)cout<<"A is a proper subset of B";
    else if(c==b)cout<<"B is a proper subset of A";
    else cout<<"I'm confused!";

    //while(1);
    return 0;
}
