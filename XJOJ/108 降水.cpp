/*
����һ�Ѱ�������һ����ε����꣬��ÿ����������䵽x���ϵ�λ��

����������һЩ
�������ҵ����Ŀǰ���������Ŀ��
Ȼ�����ε������Ϊ��������͵�����
�ظ�����ֱ���Ҳ���������������İ�Ϊֹ
��Ҫע����������δ�һ������ߵ�λ�����£�����Ϊ��������
���������͵��xλ������������Ϊ�������壬������ڴ˴���ѭ��

�ؼ��ʣ�ģ�⣬���� 
*/
#include<iostream>
using namespace std;

struct Point
{
    int x,y;
};

class Drop
{
    Point one,two;
public:
    void input()
    {
        cin>>one.x>>one.y>>two.x>>two.y;
        if(one.x>two.x)
        {
            Point temp=one;
            one=two;
            two=temp;
        }
    }
    double getY(Point p)
    {
        if(p.x<one.x || p.x>two.x)return 0;
        Point min=one.y>two.y?two:one;//minΪ���Ͻϵ͵��Ǹ��˵� 
        if(p.x==min.x)return 0;

        double t=(p.x-one.x)*(two.y-one.y)/double(two.x-one.x)+one.y;
        if(p.y<t)return 0;
        else return t;
    }
    Point drop(Point p)
    {
        if(one.y>two.y)return two;
        else return one;
    }
    
};

Drop getMax(Point p,Drop b[],int n)
{
    double max=0;
    int num=0;
    for(int i=0;i<n;i++)
    {
        if(b[i].getY(p)>max)
        {
            max=b[i].getY(p);
            num=i;
        }
    }
    return b[num];
}

int main()
{
    int n;
    Drop broad[100];
    cin>>n;
    
    for(int i=0;i<n;i++)
        broad[i].input();
    
    int m;
    cin>>m;
    while(m--)
    {
        Point p;
        cin>>p.x>>p.y;
        
        while(1)
        {
            Drop t=getMax(p,broad,n);
            if(t.getY(p)>0)
                p=t.drop(p);
            else break;
        }
        cout<<p.x<<endl;
    }
    
    //while(1);
}
