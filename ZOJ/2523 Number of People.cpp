/*
����n���������1��n������n����������С���֡������������ݵı�ʾ��

�����⻯Ϊ������Ŀ��һ��С�ѵ�
Ȼ��Ҫ���ף�����n=12����ô2^11������ͽ���12������(2^0��2^11)
������������С�ģ�2^2*3^1*5^1�Ǹ�С��һ���⣨���ǵ��ݵ������3*2*2�֣�������12��������
Ҳ����˵����n�ֽ�ɼ������ĳ˻���Ȼ��ֱ��1��Ϊһ�ѵ�����ָ��
��Ҫע����ǵ�������������������Խ���ָ��Ӧ�ø�ԽС�ĵ���������2^2*3^1*5^1<5^2*3^1*2^1
����Ҳ��һ����ȫ��n�ֽ��õ���������С������n=8=2*2*2=4*2������2^3*3^1<2^1*3^1*5^1
����ֻ�ܱ���n��������˿��ܣ�Ȼ���ҳ�ֵ��С��һ���
����ȡln����ֵ�ļ򵥷���������n=8ʱ����ln(2^3*3^1)=3ln2+ln3��ln(2^1*3^1*5^1)=ln2+ln3+ln5�Ƚ�������ֵ�Ϳ���֪��ǰ��С�ں���
����n��������˵ķ�������һ���ݹ飨���Σ����������n��ʼ��forѭ����n������п��ܵ��������ĳ˻����ٶ���������ִ����ͬ����

�ڵݹ麯������ʵ��multiset��vector����һЩ������multisetɾһ�����Ͱ������Ǹ�ֵ����ȫɾ�ˣ���Ͳ����ˡ����� 

�ؼ��ʣ����⣬�ݹ飬STL�����ۣ���ѧ�⣬���� 
*/
#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;

map<double,vector<int> > m;//���¿��ܵķֽⷽ����������Ӧ����ֵ 
int prime[40]={2};//��һЩ���� 

void add_map(vector<int> factor)
{
    double value=0;
    int i=0;
    sort(factor.begin(),factor.end(),greater<int>());
    
    vector<int>::iterator it;
    for(it=factor.begin();it!=factor.end();it++)
        value+=log(prime[i++])*(*it-1);//Ҫ��1 
        
    m[value]=factor;
}//��������ǰ��ҵ���һ���ֽⷽ��vector����map�У���Ҫ�����Ǽ���÷�����ֵ 

void separate(vector<int> factor,int n)//n����������зֽ�vector�еĵ�n���� 
{
    add_map(factor);//�ѵ�ǰ��һ���ӵ�map�� 

    for(int i=2;i*i<=factor[n];i++)
        if(factor[n]%i==0)//����ҵ��˵�n������һ���ɷֽⷽ�� 
        {
            vector<int> t=factor;
            t.insert(t.end(),i);
            t.insert(t.end(),factor[n]/i);
            t.erase(t.begin()+n);//ɾ������n��Ԫ�أ��������ֽ�������Ԫ�� 
            separate(t,t.size()-1);
            separate(t,t.size()-2);//��������Ԫ�صݹ���� 
        }
}//����Ǻ��ĵĵݹ������������ҳ����п��ܵķֽⷽ�� 

void init_prime(void)
{
    int n=1;
    for(int i=3;n<40;i+=2)
    {
        for(int j=3;j*j<=i;j+=2)
            if(i%j==0)goto end;
        prime[n++]=i;
        end:;
    }
}//��ʼ���������� 

int main()
{
    init_prime();
    
    int n;
    while(cin>>n)
    {
        m.clear();
        vector<int> t;
        t.insert(t.begin(),n);
        separate(t,0);//�����������ʼ�ݹ�ֽ� 
        
        vector<int> result=(*m.begin()).second;
        //��map�ĵ�һ��Ԫ����ȡ��������Ϊmap�Ѿ�����С�ļ�ֵ�ŵ���һ��Ԫ���ˣ���һ����������Ҫ�� 
        
        cout<<prime[0]<<"^"<<result[0]-1;
        for(int i=1;i<result.size();i++)
            cout<<" * "<<prime[i]<<"^"<<result[i]-1;
        cout<<endl;//��� 
    }
}
