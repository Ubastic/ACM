/*
����һ��EKG���У��������Ԫ�ز��ظ������Һ�һ���ǵ�ǰ���õ���С�Ĳ���ǰһ��ص���
����Ԫ��n<=300000��������ڵڼ���

������һ����6��������������2��3���������ĺ�һ����2�ı�����3�ı���
����һ������multiple��multiple[i]��ʾ��ǰ���õ���С��i�ı�������ʼʱmultiple[i]=i 
���Զ���6��������һ�����multiple[2]��multiple[3]����С��һ��

�ҵ�����һ���Ժ���Ϊ������Ԫ�أ�������Ҫ��multiple��һЩ�ı�
����6����һ����3������multiple[3]�����ٵ���3��Ҫ���ϼ�3����Ҳ���ܵ���6����Ϊ6�Ѿ����ֹ����������multiple[3]=9
ͬ���������12����Ҫ�ֱ�ı�multiple[2]��multiple[3]������ĸı䷽��������

����һ���ֵ����EKG�����У�ע��Ǳ�������ĳһ���ֵ����EKG[i]��ʾi�ڵڼ���
�����������������㣬��ǰ���ж�ĳһ��i�Ƿ��Ѿ�������������Ҳ�ܷ���

���һ����������������ٱ���ĳһ��������������������Ϊǰ��Ľⷨ�����ζ��õ��ˣ�����6���ҳ���2��3��
��vector<int> factor[MAX]����ɸ������factor[i]��Ϊi���������б������ȽϿ쵫vector���ڴ棬���ڴ����
���ڶ���һ��prime[i]��ʾi����С����������ɸ�����죩��ע��prime[p]=p
Ȼ��for(int i=prime[top];i>1;i=prime[top/=i])��仰�ͺܺõı�����top������������

�ؼ��ʣ���ѧ�⣬���ۣ����⣬���⣬���� 
*/
#include<iostream>
#define MAX 1000001
using namespace std;

int multiple[MAX]={0};//��ʾiĿǰ���õ���С����  
int EKG[MAX]={0};//EKG[i]��ʾ������i���������� 
int prime[MAX]={0};//i����С�����������п�����i���� 
    
int main()
{
    multiple[2]=4;
    EKG[1]=1;
    EKG[2]=2;
    
    for(int i=3;i<MAX;i++)
        multiple[i]=i;
    
    for(int i=2;i<MAX;i++)
        if(prime[i]==0)
            for(int j=i;j<MAX;j+=i)
                if(prime[j]==0)prime[j]=i;//ɸ������prime[i] 

    int top=2,n=3;//top��Ŀǰ������ֵ��n����һ��ĽǱ� 
    while(top<MAX)//���ļ��㣬һ��һ������ֵ 
    {
        int min=MAX;
        for(int i=prime[top];i>1;i=prime[top/=i])
            if(min>multiple[i])
                min=multiple[i];//�ҳ���һ���ֵ 
        
        top=min;
        EKG[top]=n++;
        
        for(int i=prime[min];i>1;i=prime[min/=i])
            if(multiple[i]==top)
            {
                multiple[i]+=i;
                while(multiple[i]<MAX && EKG[multiple[i]]!=0)
                    multiple[i]+=i;
            }//��multiple�е�һЩ���������ϼ� 
    }

    while(cin>>n)
    {
        if(n==0)break;
        cout<<"The number "<<n<<" appears in location "<<EKG[n]<<"."<<endl;
    }
}
