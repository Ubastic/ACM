/*
�����ֵ�ĵ��ʣ��ٶ�������(ab)(cd)e(sdf)��ģ�壬���ģ���м����������ֵ���

�ȶ������ݣ���ģ���ʱ����Щ�鷳����ÿһλ��ĸ��һ��string�棬��ʾ��λ���õ���ĸ
����ҵ��뷨�Ǳ���ģ�����п��ܵĵ��ʣ����ֵ��в��ҿ����ҵ�������д�˺�˧�ĵݹ麯�������£������ǳ�ʱ
�����������Ǳ������еĵ��ʣ��ѵ���ȫ������ģ������м�������

�ؼ��ʣ��ַ��� 
*/

/*
set<string> dictionary;
string character[15];

int search(string *character,string present="")
{
    if(present.length()==L)
        return dictionary.find(present)!=dictionary.end();

    int count=0;
    for(int i=0;i<(*character).length();i++)
        count+=search(character+1,present+(*character)[i]);
    return count;
}

cout<<search(character)<<endl;
//����һ�κܾ���Ĵ��룬�����õݹ������ģ������п����ַ��������շ����ҵ��ĵ��ʸ���������ɾȥ 
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    int L,D,N;
    cin>>L>>D>>N;
    
    string dictionary[5000]; 
    for(int i=0;i<D;i++)
        cin>>dictionary[i];//�����ֵ� 
    
    while(N--)
    {
        string character[15];
        for(int i=0;i<L;i++)
        {
            char c;
            cin>>c;
            if(c=='(')
            {
                cin>>c;
                do
                {
                    character[i]+=c;
                    cin>>c;
                }while(c!=')');
            }
            else character[i]+=c;
        }//��������
        
        int count=0;
        for(int i=0;i<D;i++)
        {
            bool judge=true;
            for(int j=0;j<L;j++)
            {
                char c=dictionary[i][j];
                if(character[j].find(c)==-1)//û�ҵ� 
                {
                    judge=false;
                    break;
                }
            }
            if(judge==true)count++;
        }
        cout<<count<<endl;
    }
    
    //while(1);
}
