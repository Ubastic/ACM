/*
����n����ʹ2^x=1(mod n)��������Сxֵ

2^x%n�ȼ���2%nȻ���2��%n�����ѭ��x��ֱ��ֵΪ1
���ҽ���nΪż����n=1ʱ������

�ؼ��ʣ���ѧ��
*/
#include <iostream> 
using namespace std; 

int main()
{ 
    int n,x,js;
 
    //freopen("aaa.txt","r",stdin);

    while (cin>>n)
    { 
        if(n%2==0||n==1)
        {
            cout<<"2^? mod "<<n<<" = 1"<<endl;
            continue;
        }
   
        x=1,js=0;
        
        while(1)
        { 
            x*=2;
            x%=n;
            js++; 
            if (x==1)break; 
            
        }
        
        cout<<"2^"<<js<<" mod "<<n<<" = 1"<<endl; 
         
    }
    
    //while(1);
    return 0; 
} 