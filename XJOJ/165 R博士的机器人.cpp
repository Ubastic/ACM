/*
һ��������������һ������Ϊ���ֵ������һ�������ٳ���Ϊf�� 

������297�Ĵ���ˮ��һ��������һ�����������Ǵ������ٳ���
�൱��297�ǵ�������ٳ�����1
�ٱ�����ʱ�򣬰�min����Сֵ����Ϊ��ǰԪ����ǰ��f��Ԫ����Сֵ 

�ؼ��ʣ���̬�滮 
*/
#include<iostream>
using namespace std;

int energy[1000001]={0};

int main()
{
    int n,f;
    cin>>n>>f;
    for(int i=1;i<=n;i++)
    {
        cin>>energy[i];
        energy[i]+=energy[i-1];
    }    
    
    int min=energy[0],max=energy[f]-energy[0];
    for(int i=f;i<=n;i++)
    {
        if(energy[i-f]<min)min=energy[i-f];
        if(energy[i]-min>max)max=energy[i]-min;
    }
    
    cout<<max<<endl;
    
    //while(1);
}
