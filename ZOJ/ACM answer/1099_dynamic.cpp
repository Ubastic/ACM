������: dynamic (programming@math), ����: ACMICPC 
��  ��: Re: ʵ�ڲ����1099�ˣ��鷳���˵ĵ������������� 
����վ: ����ʱ�� Yat-sen Channel (Wed Mar 12 17:11:32 2003), վ���ż� 
  
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
        int pos=0,i,n; 
        char s[90],c; 
        while(1){ 
                n=0; 
                while(1){ 
                        c=getchar(); 
                        if (c==' '||c=='\t'||c=='\n'||c==EOF) break; 
                        s[n++]=c; 
                } 
                s[n]=0; 
                if (n==0){ 
                        if (c==EOF){ 
                                printf("\n"); 
                                break; 
                        } 
                        continue; 
                } 
                if (strcmp(s,"<br>")==0){ 
                        printf("\n"); 
                        pos=0; 
                        if (c==EOF){ 
                                printf("\n"); 
                                break; 
                        } 
                        continue; 
                }else if (strcmp(s,"<hr>")==0){ 
                        if (pos!=0) printf("\n"); 
                        for(i=0;i<80;i++) printf("-"); 
                        printf("\n"); 
                        pos=0; 
                        if (c==EOF){ 
                                printf("\n"); 
                                break; 
                        } 
                        continue; 
                } 
                if (n+1+pos>80){ 
                        printf("\n%s",s); 
                        pos=n; 
                }else{ 
                        if (pos!=0){ 
                                printf(" %s",s); 
                                pos+=n+1; 
                        }else{ 
                                printf("%s",s); 
                                pos=n; 
                        } 
                } 
                if (c==EOF){ 
                        printf("\n"); 
                        break; 
                } 
        } 
        return 0; 
} 
�� �� zhonglei (radium) �Ĵ������ᵽ: �� 
: ft�ַ��� 

  
  
-- 
��һ��С·��������Ұ��ͨ�����ϸ��أ��Ҿ�������һ�˵�����ȥ�����գ����뵽��ɱ 
��Ȼ���������ڲ�����ɱ����Ϊ���������˽���ѧ�� 
                                                         ����B.Russell 
  
