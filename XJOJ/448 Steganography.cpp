/*
ͳ�������һ�λ��еĿո������������ո��Ϊ0������ż�����ո��Ϊ1�����õ��Ķ����Ʊ����һ���Ӧ������ĸ���

ֱ��������Ҫ�㼼�ɣ���getchar����

�ؼ��ʣ��ַ���������ת�� 
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    //freopen("aaa.txt","r",stdin);
    
    char input,space=0;
    vector<int> code;
    
    while(input=getchar())
    {
        if(input=='#')break;
        
        if(input==' ')space++;
        else
        {
            if(space>0)
            {
                if(space%2==0)code.push_back(1);
                else code.push_back(0);
            }
            space=0;
        }
        if(input=='*')
        {
            int least=(code.size()+4)/5*5-code.size();
            for(int i=0;i<least;i++)
                code.push_back(0);
                
            string s;
            for(int i=0;i<code.size();i+=5)
            {
                int c=code[i]*16+code[i+1]*8+code[i+2]*4+code[i+3]*2+code[i+4];
                switch(c)
                {
                    case 0 :s+=' ';break;
                    case 27:s+='\'';break;
                    case 28:s+=',';break;
                    case 29:s+='-';break;
                    case 30:s+='.';break;
                    case 31:s+='?';break;
                    default:s+='A'+c-1;
                }
            }
            cout<<s<<endl;
            code.clear();
        }
    }
    
    //while(1);
}
