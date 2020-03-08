/*
�������J��F��ʾ�����ı������Լ�����ӵ�е�F��������ܽ���������J������Ƚϸ��ӵ��ⲻ��

��vector���¸����ݲ�ֱ�����к�
Ȼ��һ��һ����ģ�⽻��ֱ�����꼴��
�����СҪ��

�ؼ��ʣ����⣬STL��̰�� 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct FatMouse
{
    double J;//java bean
    double F;//cat food
    double a;
};

bool compare(FatMouse m,FatMouse n)
{
    return m.a>n.a;
}

int main()
{
    int M,N;
    while(cin>>M>>N)
    {
        if(M==-1 && N==-1)break;
                    
        vector<FatMouse> v;
        FatMouse temp;
        for(int i=0;i<N;i++)
        {
            cin>>temp.J>>temp.F;
            temp.a=temp.J/temp.F;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),compare);
        
        double total=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].F>M)
            {
                total+=M*v[i].a;
                break;
            }
            else
            {
                total+=v[i].J;
                M-=v[i].F;
            }
        }
        cout.precision(3);
        cout<<fixed<<total<<endl;
    }
}
