//by dynamic 
//on tuesday august 6th 
#include <stdio.h> 
int main() 
{ 
        int n,i,j,t,min,a[60],c[60],p,p1; 
        char d; 
        bool flag[60],g[60][60],quit; 
        //freopen("test.in","r",stdin); 
        quit=false; 
        while(1) 
        { 
                n=p1=0; 
                for(i=0;i<=50;i++) a[i]=c[i]=0; 
                for(i=0;i<=50;i++) 
                        for(j=0;j<=50;j++) 
                                g[i][j]=false; 
                while(1) 
                { 
                        d=getchar(); 
                        if (d==-1){ 
                                quit=true; 
                                break; 
                        } 
                        if (d=='\n') break; 
                        if (d==' ') continue; 
                        if (d=='('){ 
                                scanf("%d",&t); 
                                a[p1]=t; 
                                p1++; 
                                n++; 
                                if (p1==1) continue; 
                                c[a[p1-2]]++; 
                                c[t]++; 
                                g[t][a[p1-2]]=true; 
                                g[a[p1-2]][t]=true; 
                                continue; 
                        } 
                        if (d==')') p1--; 
                } 
                for(i=1;i<=n;i++) flag[i]=false; 
                for(t=1;t<n;t++) 
                { 
                        min=100; 
                        for(i=1;i<=n;i++) 
                                if (c[i]==1&&!flag[i]&&i<min) min=i; 
                        flag[min]=true; 
                        for(i=1;i<=n;i++) 
                                if (!flag[i]&&g[min][i]) p=i; 
                        c[p]--; 
                        if (t==1) printf("%d",p); 
                        else printf(" %d",p); 
                } 
                if (quit){ 
                        //fclose(stdin); 
                        return 0; 
                } 
                printf("\n"); 
        } 
} 
�� �� zhonglei (radium) �Ĵ������ᵽ: �� 
: 
: �� �� dynamic (programming@math) �Ĵ������ᵽ: �� 
: : ���� 
: : �� �� zhonglei (radium) �Ĵ������ᵽ: �� 
: ���뿴����1097������ 

  
  
-- 
��һ��С·��������Ұ��ͨ�����ϸ��أ��Ҿ�������һ�˵�����ȥ�����գ����뵽��ɱ 
��Ȼ���������ڲ�����ɱ����Ϊ���������˽���ѧ�� 
                                                         ����B.Russell 
  
