/*
N*N�����ϰ�N���ʺ󻥲������ķ�����

�����������
judge()�����ж��°ڵ������Ƿ��ǰ���ì��
search()������������������ģ��������ܵ���N����ô��������һ
column[i]��ʾ��i�лʺ�ĺ�����
main_diagonal[row-i+N]��ʾ��row�е�i�е����Խ��߱�� 
vice_diagonal[row+i]��ʾ��row�е�i�еĸ��Խ��߱�� 

�ؼ��ʣ��ݹ飬DFS������������� 
*/
#include<iostream>
using namespace std;

int n,c;
bool column[11];
bool main_diagonal[21];
bool vice_diagonal[21];

void search(int row)
{
    if(row==n){c++;return;}
    for(int i=0;i<n;i++)
        if(column[i]==false && main_diagonal[row-i+n]==false && vice_diagonal[row+i]==false)
        {
            column[i]=main_diagonal[row-i+n]=vice_diagonal[row+i]=true;
            search(row+1);
            column[i]=main_diagonal[row-i+n]=vice_diagonal[row+i]=false;
        }
}

int main()
{
    while(cin>>n && n)
    {
        fill_n(column,sizeof(column),0);
        fill_n(main_diagonal,sizeof(main_diagonal),0);
        fill_n(vice_diagonal,sizeof(vice_diagonal),0);
        c=0;
        
        search(0);
        cout<<c<<endl;
    }
}
