/*
һ��4.5�����·��һ���˴ӳ������ﳵ������Ҫ�ͱ���һ����������һ���˳��������ͼ��ٺ��Ǹ���һ����
���յ���Ҫ�೤ʱ��

������֪����˲����ܱ����˳��������϶������ȵ���
̰�ģ�O(n)��ö�����г��ӣ������
1. ��ʼʱ�� < 0 �ģ����迼�ǣ�̫��ĸϲ��ϣ�̫���ĸ���Ҳû�á�
2. ��ʼʱ�� > 0 �ģ�Charley �����絽��ĳ���һ�𵽴

�ؼ��ʣ�̰�ģ����� 
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        
        double speed;
        int start;
        double time;
        double min=1e9;
        for(int i=0;i<n;i++)
        {
            cin>>speed>>start;
            if(start>=0)
            {
                time=4.5/speed*3600+start;
                if(time<min)min=time;
            }
        }
        cout<<ceil(min)<<endl;
    }
}
