/*
���a^b%c�Ľ��

��aÿ�γ�aģc����˷���b�μ���

�ؼ��ʣ����ۣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int result=1;
    for(int i=0;i<b;i++)
    {
        result=(result*a)%c;
    }
    
    cout<<result;
    
    //while(1);
    return 0;
}
