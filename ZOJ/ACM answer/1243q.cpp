//ע��http://www.126.com/Tabby:80����������

#include<iostream>
#include<string>
using namespace std;

int main(){
int cases;
cin>>cases;
string enter;
   getline(cin,enter);

for(int i=1;i<=cases;i++)
{
   string str;
   string Protocol;
   string Host;
   string Port;
   string Path;
   int npos = -1;
    getline(cin,str);

   printf("URL #%d\n",i);
   int index1 = str.find_first_of(":",0);
   Protocol = str.substr(0,index1);
   int index2 = str.find_first_of(":",index1+1);
   if(index2==npos)//δ�ҵ�ð��
   {
    Port = "<default>";
    int index3 = str.find_first_of("/",index1+3);
    if(index3==npos)
    {
     Host = str.substr(index1+3,str.length()-index1-3);
     Path = "<default>";
    }
    else
    {
     Host = str.substr(index1+3,index3-index1-3);
     if(index3<str.length()-1)     
       Path = str.substr(index3+1,str.length()-index3-1);
     else
      Path = "<default>";
    }

   }
   else{//�ҵ�ð��
    int index4 = str.find_first_of("/",index1+3);//Ѱ��"/"
    if(index4!=npos){//�ҵ�"/"
     if(index4<index2)//"/"��ð��ǰ��
     {
      Port = "<default>";
      Host = str.substr(index1+3,index4-index1-3);
      Path = str.substr(index4+1,str.length()-1-index4);
     }
     else//"/"��ð�ź���
     {
      Host = str.substr(index1+3,index2-3-index1);
      Port = str.substr(index2+1,index4-1-index2);
      Path = str.substr(index4+1,str.length()-1-index4);

     }
    }
    else{//δ�ҵ�"/"
     Host = str.substr(index1+3,index2-3-index1);
     Port = str.substr(index2+1,str.length()-1-index2);
     Path = "<default>";
    
    }

   }

   cout<<"Protocol = "<<Protocol<<endl;
   cout<<"Host     = "<<Host<<endl;
   cout<<"Port     = "<<Port<<endl;
   cout<<"Path     = "<<Path<<endl;
   cout<<endl;


  
}

}
