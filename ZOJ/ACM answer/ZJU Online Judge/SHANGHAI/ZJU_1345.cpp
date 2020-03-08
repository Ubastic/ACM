#include <stdio.h>
#include <string.h>

int M,N;
int topM,depM,tarM; //��ߵȼ� ��͵ȼ� �����ȼ�

struct Listtype{
	int t,v; //���Ʒ�ı�ź�"�Żݼ۸�"
};

struct data{
	int p,l,x; // ��Ʒ�ļ۸� ���˵ĵ�λ�ȼ� ���Ʒ����	
	Listtype List[101]; //���Ʒ�б�
};

data G[101];
int Best;

int Low[100];

inline int min(int a,int b){
	return(a < b ? a : b);
}

int Top,Dep;// �ȼ����½�

int dp(int v){ 
	if(Low[v] < 0){
		Low[v] = G[v].p;
		for(int i=0; i<G[v].x; i++)
			if((G[G[v].List[i].t].l <= Top) && (G[G[v].List[i].t].l >= Dep)){
				Low[v] = min(Low[v],dp(G[v].List[i].t) + G[v].List[i].v);
			}
	}

	return Low[v];
}

void solve(){
	//���� ��ȷ���ȼ����½���dp
	for(int top = min(topM,tarM + M); top>=tarM; top--){		
		memset(Low,255,sizeof(Low)); Top = top; Dep = top - M;
		Best = min(Best,dp(1));
	}
}

int main()
{
//	freopen("in.txt","r",stdin);
//  freopen("out.txt","w",stdout);
	while(scanf("%d %d",&M,&N) > 0)
    {
        int i,j;
        for(topM=-1,depM=1000000,i=1; i<=N; i++){
            scanf("%d %d %d",&G[i].p,&G[i].l,&G[i].x);
            if(G[i].l > topM) topM = G[i].l;
            if(G[i].l < depM) depM = G[i].l;
            for(j=0; j<G[i].x; j++) scanf("%d %d",&G[i].List[j].t,&G[i].List[j].v);		
        }
        tarM = G[1].l;

        Best = G[1].p;
        solve();
        printf("%d\n",Best);
	}
	return 0;
}