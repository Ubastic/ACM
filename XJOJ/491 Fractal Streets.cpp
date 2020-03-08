/*
Hilbert curve���⣬����Hilbert curve�Ľ����Լ��Ը�������Ȼ�����ʾ�����㣬���������ֱ�߾���

��Ҫ����Ȼ����ת��Ϊֱ������
����˵ÿ�θ�����Ȼ�����ֵ�жϸõ���ͼ�е�λ�ã�����0������1������2������3��
һ��һ���𽥾�ȷ��
����Ҫ�жϷ���ͼ��ֻ�������ַ���type��������0��������1��������2��������3��
����transferת�����������ݵ�ǰtype��������λ���ж���һ����type
��block�����Ǹ��ݵ�ǰtype���ڸ���Ȼ�����µĳ���ȷ��ֱ�������µ�λ��
�����Ը���һ��һ��λ�õ�ȷ���õ�ֱ������

�ؼ��ʣ����⣬�ݹ� 
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> get_position(int order,int num)
{
    int transfer[4][4]={{1,0,0,2},{0,1,1,3},{3,2,2,0},{2,3,3,1}};
    int block[4][4]={{0,1,2,3},{0,3,2,1},{2,1,0,3},{2,3,0,1}};
    int total=1;
    for(int i=0;i<order;i++)
        total*=4;

    int type=0,x=1,y=1;
    for(int i=0;i<order;i++)
    {
        total/=4;
        int part=(num-1)/total;
        num-=total*part;
        
        int pos=block[type][part];
        
        if(pos==2||pos==3)x+=sqrt(total);
        if(pos==1||pos==2)y+=sqrt(total);
        
        type=transfer[type][part];
    }
    
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    return v;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,h,o;
        cin>>n>>h>>o;
        
        vector<int> pos1,pos2;
        pos1=get_position(n,h);
        pos2=get_position(n,o);
         
        int x=pos1[0]-pos2[0];
        int y=pos1[1]-pos2[1];

        cout<<int(sqrt(x*x+y*y)*10+0.5)<<endl;
    }
}
