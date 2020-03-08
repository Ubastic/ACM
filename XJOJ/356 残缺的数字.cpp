/*
1~n������һ����������֪��0~9��Щ��λ��ǰ����ֵĴ�������n�����˵��Ǹ���

�ȸ���������λ���n����Сֵ
��Ϊ�ٵ��Ǹ����������1000�����Ա�����������������
�������n�Ժ����1~n��0~9��λ������Ŀ�������
�ٱ���1~n����û�����ֿ��Թ��������������

�ؼ��ʣ���ѧ�� 
*/
#include<iostream>
using namespace std;

int num(int x)
{
    if(x<10)return x;
    else if(x<190)return (x-9)/2+10;
    else if(x<2890)return (x-189)/3+100;
    else return (x-2889)/4+1000;
}

void count(int x,int p[])
{
    int t;
    memset(p,0,10*sizeof(p[0]));
    
    for(int i=1;i<=x;i++)
    {
        t=i;
        while(t>0)
            p[t%10]++,t/=10;
    }
} 

bool judge(int x,int p[])
{
    int q[10]={0};
    
    while(x>0)
    {
        q[x%10]++;
        x/=10;
    }
    for(int i=0;i<10;i++)
        if(p[i]!=q[i])return false;

    return true;
}//�ж�x�ĸ�λ�Ƿ��p����һ�� 

int main()
{   
    int digit[10],real[10],sum=0;
    bool solution=false;
    for(int i=0;i<10;i++)
    {
        cin>>digit[i];
        sum+=digit[i];
    }//���� 
    
    for(int i=num(sum);i<num(sum)+3;i++)
    {
        count(i,real);
        for(int j=0;j<10;j++)
        {
            real[j]-=digit[j];
            if(real[j]<0)goto end;
        }
        
        for(int j=1;j<=i;j++)
            if(judge(j,real)==true)
            {
                cout<<i<<' '<<j<<endl;
                solution=true;
            }
        end:;
    }
    if(solution==false)cout<<"NO ANSWER";
    //while(1);
}
