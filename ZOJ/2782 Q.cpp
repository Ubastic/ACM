/*
��һ��������Ҫ��ѵ�i��Ԫ�طŵ���j��λ�ã���ЩҪ����ͬ���ģ���ı��Ĵ� 

�ȸ���Ҫ��ѵ�i��Ԫ�طŵ���j��λ��
Ȼ��ɾ����ԭ���зŹ���Ԫ��
�����´��а�˳���ϻ�û�ŵ�Ԫ��

�ؼ��ʣ����⣬����STL 
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int m,n;
        cin>>m>>n;
        
        vector<string> v(m),result(m);
        for(int i=0;i<m;i++)
        {
            string s;
            cin>>s;
            v[i]=s;
        }
        
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            result[b-1]=v[a-1];
            v[a-1].clear();
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i].length()==0)
            {
                v.erase(v.begin()+i);
                i--;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(result[i].length()==0)
            {
                result[i]=*v.begin();
                v.erase(v.begin());
            }
        }
        
        cout<<result[0];
        for(int i=1;i<m;i++)
            cout<<' '<<result[i];
        cout<<endl;
    }
} 
