/*
�и���Ҫ�������̵��������ʰѳ�ͣ���ߵ�·�����٣�������·��

�̵���һ��ֱ���ϣ������̵��λ��
�����Ժ�ֻҪ�ó�ͣ����ͷ�̵�֮�������
�ߵ�·��Ϊ��ͷ�̵�ļ����Զ�

�ؼ��ʣ����� 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int shop[20];
        for(int i=0;i<n;i++)
            cin>>shop[i];
            
        sort(shop,shop+n);
        cout<<2*(shop[n-1]-shop[0])<<endl;
    }
}
