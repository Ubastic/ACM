#include <iostream>
using namespace std;

//�����
//��������Ŵ�С��һ������,����ͼ�Ĵ�Сn���ڽ���mat
//mat[i][j]Ϊ������

#define MAXN 50

void clique(int n, int* u, int mat[][MAXN], int size, int& max, int& bb, int* rr, int* c) {
	int i, j, vn, v[MAXN];
	if (n) {
		if (size + c[u[0]] <= max) return;
		for (i = 0; i < n + size - max && i < n; ++ i) {
			for (j = i + 1, vn = 0; j < n; ++ j)
				if (mat[u[i]][u[j]])
					v[vn ++] = u[j];
			rr[size] = u[i];
			clique(vn, v, mat, size + 1, max, bb, rr, c);
			if (bb) return;
		}
	} else if (size > max) {
		max = size;
		for (i = 0; i < size; ++ i)
			//res[i] = rr[i];
		bb = 1;
	}
}

int maxclique(int n, int mat[][MAXN]) {
	int max = 0, bb, c[MAXN], i, j;
	int vn, v[MAXN], rr[MAXN];
	for (c[i = n - 1] = 0; i >= 0; -- i) {
		for (vn = 0, j = i + 1; j < n; ++ j)
			if (mat[i][j])
				v[vn ++] = j;
		bb = 0;
		rr[0] = i;
		clique(vn, v, mat, 1, max, bb,rr, c);
		c[i] = max;
	}
	return max;
}


int main()
{
	int a[50][50];
	int i, j;
	int n;
	while(cin >> n && n)
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << maxclique(n, a) << endl;
	}
	return 0;
}