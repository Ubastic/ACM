/*
����ֱ���ϵ����估�����ɫ����������������Ϻ���ɫ��С˳��������Կ����ĸ���ɫ�Ŀ���

�ȶ������ݣ���һ����������ȥģ�⣬��¼��ȫ������Ľ��
Ȼ��Ѳ�ͬ����ɫ����multiset�У���Ϊ�ǿ�ĸ���������Ҫ��һ�������ǡ��˴�����ɫ��ͬ��ǰһ�����ɫ���������
Ȼ����multiset�������Ԫ�أ��������ɾ������Ԫ�ء�ɾ���˼�����ֱ������

�ؼ��ʣ�ģ�⣬STL
*/
#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int color[8000];
        for(int i=0;i<8000;i++)
            color[i]=-1;

        int x1,x2,c;
        for(int i=0;i<n;i++)
        {
            cin>>x1>>x2>>c;
            for(int j=x1;j<x2;j++)
                color[j]=c;
        }
        
        multiset<int> ms;
        if(color[0]>=0)ms.insert(color[0]);
        for(int i=1;i<8000;i++)
            if(color[i]!=color[i-1] && color[i]>=0)
                ms.insert(color[i]);
        
        while(ms.size()>0)
        {
            cout<<*ms.begin()<<' ';
            cout<<ms.erase(*ms.begin())<<endl;
            //������Ҫ�ֿ�д����Ϊcoutִ�м����Ǵ������󣬻���� 
        }
        cout<<endl;
    }
}
