/*
������Щͼ��������һ��ͼ����ÿ��ͼ��������ͳ��ִ�������һƽ��Ӣ��Ĳ����������ж�����ͼ��������2��3ƽ��Ӣ��

1yard=36feet
��ʵֱ����������Ϳ�����~~��

�ؼ��ʣ����� 
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int image;
        cin>>image;
        
        int total=0;
        while(image--)
        {
            int s,r;
            cin>>s>>r;
            total+=s*r;
        }
        cout<<1296/total<<" "<<1296*2/total<<" "<<1296*3/total<<endl;
    }
}

