/*
���һ������ƴͼ�����ٲ���

������ù�������������ģ�ֱ���ѵĻ��м���������ظ�״̬����һ��set��¼���Ա����ظ�״̬�������
��д��һ����¼����״̬����
�������õĽⷨ��˫����������A*����ʽ����

�ؼ��ʣ��������������A*����ʽ���� 
*/
#include<iostream>
#include<queue>
#include<set>
using namespace std;

enum Forward{f_up,f_down,f_left,f_right,f_null};

struct Board
{
    int data[3][3];
    int row,column;//the position of zero
    int step;
    Forward last;//��һ���ߵķ���
    
    void input()
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
            {
                cin>>data[i][j];
                if(data[i][j]==0){row=i;column=j;}
            }
        step=0;
        last=f_null;
    }
    bool operator <(const Board b)const
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(data[i][j]!=b.data[i][j])
                    return data[i][j]<b.data[i][j];
        return false;
    }//Ϊ����set������һ���ȽϺ��� 
    bool move(Forward f)
    {
        switch(f)
        {
            case f_up:
                if(row<=0 || last==f_down)return false;
                data[row][column]=data[row-1][column];
                row--;break;
            case f_down:
                if(row>=2 || last==f_up)return false;
                data[row][column]=data[row+1][column];
                row++;break;
            case f_left:
                if(column<=0 || last==f_right)return false;
                data[row][column]=data[row][column-1];
                column--;break;
            case f_right:
                if(column>=2 || last==f_left)return false;
                data[row][column]=data[row][column+1];
                column++;break;
        }
        data[row][column]=0;
        step++;last=f;
        return true;
    }//��ĳһ�����ƶ�һ�� 
    bool judge()
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(data[i][j]!=(i*3+j+1)%9)return false;
        return true;
    }//�ж��Ƿ�����״̬ 
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Board start;start.input();
        queue<Board> q;q.push(start);
        set<Board> s;s.insert(start);
        
        while(q.size()>0)
        {
            Board f[4];
            f[0]=f[1]=f[2]=f[3]=q.front();
            q.pop();
            
            for(int i=0;i<4;i++)
                if(f[i].move(Forward(i))==true)
                    if(s.find(f[i])==s.end())
                        if(f[i].judge()==true)
                        {cout<<f[i].step<<endl;goto end;}
                        else{q.push(f[i]);s.insert(f[i]);}
        }
        end:;
    }
}
