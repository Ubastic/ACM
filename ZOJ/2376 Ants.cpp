/*
�г���Ϊl�ĸˣ�������n�����ϣ���֪ÿ�����ϵ�λ�ã���֪�������ٶ�һ���������������ͷ��
������ȫ�Ӹ��ϵ�������Ҫ����̼��ʱ��

��������������ͷ����Ϊ�ٶ�һ�������Ե�Ч�ڻ��ഩ͸
������̵�ʱ����Ǽ���ÿ�����϶�����˵���ķ����ߣ�������Զ����ֻ���Ͼ������ʱ��
��֮�ʱ���Ǽ���ÿ�����϶�����˵�Զ�ķ����ߣ�Ҳ��ȡ���ھ�����Զ������

�ؼ��ʣ����㷨������ 
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        
        int maxtime=0,mintime=0;
        for(int i=0;i<n;i++)
        {
            int ant;
            cin>>ant;
            int max=ant>l-ant?ant:l-ant;
            int min=ant<l-ant?ant:l-ant;
            if(max>maxtime)maxtime=max;
            if(min>mintime)mintime=min;
        }
        
        cout<<mintime<<' '<<maxtime<<endl;
    }
}
