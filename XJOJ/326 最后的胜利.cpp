/*
���߶��ڶ�����ڲ��ĳ��ȣ�������ֵ

�ܸ��ӣ�ֱ������
����ĳһ���ߣ��ȿ����Ƿ�Ͷ����ĳһ�����غϣ��غϵĻ�ֱ�ӷ����㣨��ĿҪ�󲻿����غϵģ�
Ȼ��������������ཻ��������
����������ɵ��߶κ�ԭ�߶εĽ������Ƕ�����ڲ����߶�
�������ĳ���

�ؼ��ʣ�ģ�⣬���鷳������ 
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double det(double a,double b,double c,double d)
{
    return a*d-b*c;
}//���������ʽ��ֵ

struct Point
{
    double x,y;
    
    Point(double a=0,double b=0):x(a),y(b){}
    friend istream& operator>>(istream &input,Point& p)
    {
        input>>p.x>>p.y;
        return input;
    }
    friend ostream& operator<<(ostream &output,Point& p)
    {
        output<<"("<<p.x<<","<<p.y<<")";
        return output;
    }
    bool operator ==(Point p){return x==p.x && y==p.y;}
    bool operator !=(Point p){return x!=p.x || y!=p.y;}
};

struct vector
{
    Point point[2];
    int n;
    
    vector(int i=0):n(i){}
    Point operator [](int i){return point[i];}
    void insert(Point p)
    {
        if(find(p)==false)point[n++]=p;
    }
    int size(){return n;}
    bool find(Point p)
    {
        for(int i=0;i<n;i++)
            if(p==point[i])return true;
        return false;
    }
};

struct Line
{
    Point a,b;
    
    Line(Point m=Point(0,0),Point n=Point(0,0)):a(m),b(n){}
    Line(double q,double w,double e,double r):a(q,w),b(e,r){}
    
    friend istream& operator>>(istream &input,Line& l)
    {
        input>>l.a>>l.b;
        return input;
    }
    
    friend ostream& operator<<(ostream &output,Line& l)
    {
        output<<l.a<<' '<<l.b;
        return output;
    }
    
    bool Point_of_Intersection(Line l,Point &p)
    {
        double denominator=det(b.y-a.y , b.x-a.x , l.b.y-l.a.y , l.b.x-l.a.x);
        if(denominator==0)return false;
        
        double up,down;
        up=det(l.a.y , l.b.y , l.a.x , l.b.x);
        down=det(a.y , b.y , a.x , b.x);
        
        p.x=det(up , down , l.b.x-l.a.x , b.x-a.x)/denominator;
        p.y=det(up , down , l.b.y-l.a.y , b.y-a.y)/denominator;
        
        return true;
    }//�������ߵĽ��㣬�����Ƿ��������� 
    
    bool inner(Point p)
    {
        return p.x<=max(a.x,b.x) && p.x>=min(a.x,b.x) && p.y<=max(a.y,b.y) && p.y>=min(a.y,b.y);
    }//�жϵ��Ƿ����߶��� 

    double length()
    {
        return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    }//�߶γ��� 
    
    Line Line_of_Intersection(Line l)
    {
        vector result;
        
        if(l.inner(a)==true)result.insert(a);
        if(l.inner(b)==true)result.insert(b);
        if(inner(l.a)==true)result.insert(l.a);
        if(inner(l.b)==true)result.insert(l.b);
        
        if(result.size()<2)return Line(0,0,0,0);
        else return Line(result[0],result[1]);
        
    }//���߶εĽ��߶� 
    
    bool superposition(Line l)
    {
        if(fabs(det(b.y-l.a.y , l.b.y-l.a.y , b.x-l.a.x , l.b.x-l.a.x))<1e-9)
            if(fabs(det(a.y-l.a.y , l.b.y-l.a.y , a.x-l.a.x , l.b.x-l.a.x))<1e-9)
                return true;
        return false;
    }
};

struct Polygon
{
    Point *vertex;
    int n;
    
    Polygon(int a):n(a){vertex=new Point [n];}
    ~Polygon(){delete[] vertex;}
    
    double intersect(Line l)
    {
        vector result;
        for(int i=0;i<n;i++)//��������ε�ÿ���� 
        {
            Line mine(vertex[i],vertex[(i+1)%n]);//����ε�һ���� 
            Point p;
            
            if(l.superposition(mine)==true)return 0;
            
            if(mine.Point_of_Intersection(l,p)==true)//����ҵ��˽��� 
            {
                if(mine.inner(p)==true)//���ҽ������߶η�Χ��
                {
                    result.insert(p);
                    //cout<<p<<endl;
                }
            }
        }
        
        if(result.size()<2)return 0;
        else
        {
            Line r(result[0],result[1]);
            r=r.Line_of_Intersection(l);
            //cout<<r<<endl;
            return r.length();
        }
    }
};

int main()
{
    //freopen("aaa.txt","r",stdin);

    int n;
    cin>>n;
    Polygon gem(n);
    for(int i=0;i<n;i++)
        cin>>gem.vertex[i];
    
    double max=0;
    int m;
    cin>>m;
    while(m--)
    {
        Line light;
        cin>>light;
        
        double length=gem.intersect(light);
        if(max<length)max=length;
        //cout<<length<<endl<<endl;
    }
    
    cout.precision(2);
    cout<<fixed<<max;
    //while(1);
}
