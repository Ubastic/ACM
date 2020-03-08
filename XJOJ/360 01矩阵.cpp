/*
�ж�һ��bool�����ܷ�ͨ�����ɴ���ȡ������ȡ����Ϊȫ���ȫһ����������ٴ���

����ÿ��Ԫ�����в��ܽ���λ�ã������Ȱѵ�һ��ͨ����ȡ����Ϊȫ��һ����
Ȼ��ʣ�¼��У��������ֻͨ����ȡ�����Ŀ�ļ�������У�ÿ��Ԫ��һ���� 
���ԶԵ�һ�н�����ȡ����ʱ�����ٵĴ����ǵ�һ���и������ٵ��Ǹ����ֵĸ���
�Ծ��������ȡ����ʱ�����ٴ���Ҳ�����ٵ��Ǹ�Ԫ���еĸ���
����һ�Ӿ��������ٴ���

�ؼ��ʣ���˼�� 
*/
#include<iostream>
using namespace std;

int m,n;

int trans(bool t[][1000])
{
    bool matrix[1000][1000];
    memcpy(matrix,t,sizeof(matrix));
    
    int count=0;
    for(int i=0;i<m;i++)
        if(matrix[i][0]!=0)
        {
            for(int j=0;j<n;j++)
                matrix[i][j]=!matrix[i][j];
            count++;
        }
    count=min(count,m-count);
    
    int count2=0;
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<m;i++)
            if(matrix[i][j]!=matrix[i-1][j])return -1;
        if(matrix[0][j]!=0)
            count2++;
    }
    count2=min(count2,n-count2);
    
    return count+count2;
}

int main()
{
    cin>>m>>n;
    
    bool matrix[1000][1000];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            matrix[i][j]=c-'0';
        }
        
    int steps=trans(matrix);
    
    cout<<steps<<endl;
    //while(1);
}
