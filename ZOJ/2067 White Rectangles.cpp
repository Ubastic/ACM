/*
����n�׷�����'.'��'#'��ɣ�����'.'���ɵľ����ж��ٸ�

1.�ȶ������ݣ���дΪ1,0��ʽ��������original[n][n]���� 
2.Ȼ�������дΪ��ÿ��Ԫ�ذ������������ж��ٸ�������1��
  ����ԭ����ĵ�һ��Ϊ1110011����д�����1230012
3.���½�һ������rectangular[n][n]����������i,jΪ���ϽǶ���ľ����ж��ٸ�
  ��i,j�������ң�ÿ�μ��ϵ�ǰ����Сֵ�Ϳ����ˡ������һ����������
  ����������£�
  111111
  001111
  000111
  111111
  ���������Ͻǵ�ֵΪ6������(1,1)-(1,6) (1,2)-(1,6) (1,3)-(1,6) (1,4)-(1,6) (1,5)-(1,6) (1,6)-(1,6)��6�����Σ�����һ����Ҳ�㣩 
  ��һ��2,6������ֵΪ4�����Ե�ǰ��СֵΪ4������(2,3)-(1,6) (2,4)-(1,6) (2,5)-(1,6) (2,6)-(1,6)���ĸ�����
  ͬ��������ֵΪ3����������(3,4)-(1,6) (3,5)-(1,6) (3,6)-(1,6)����������
  �����е�ֵ��ȻΪ6����������������6�����Σ���Ϊ(4,1)-(1,6)�м��������1�ĵ㣬���Ե�ȡ��ǰ��Сֵ3
  �����г����ζ�����(1,6)Ϊ���Ͻǵģ�����ȫ���ӵ�rectangular[1][6]��
4.����ٰ�rectangular��������Ԫ��ֵ��һ�����������

�ؼ��ʣ����⣬���㷨������ 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        char original[100][100];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>original[i][j];
                if(original[i][j]=='.')original[i][j]=1;
                else original[i][j]=0;
            }//(1) 
        
        for(int i=0;i<n;i++)
            for(int j=1;j<n;j++)
                if(original[i][j]==1)
                    original[i][j]+=original[i][j-1];//(2)
                    
        int rectangular[100][100]={0},min;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(original[i][j]==0)continue;
                min=original[i][j];
                
                for(int k=i;k<n;k++)
                {
                    if(original[k][j]==0)break;
                    if(min>original[k][j])min=original[k][j];
                    rectangular[i][j]+=min;
                }
            }
        
        int count=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                count+=rectangular[i][j];
                
        cout<<count<<endl;
    }
}
