#include <bits/stdc++.h>
using namespace std;

int mat[105][105];
int sol[10005][2];
int main() {
	int n,i , j, m , k, a, b;
	scanf ("%lld%lld%lld", &n, &m,&k);
	memset(mat,0,sizeof(mat));
	while (k--) {
		scanf("%lld%lld", &a, &b);
		mat[a][b] = 1;
		}

	int sum = 0;
	int l = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (mat[i][j] == 0) {
//				cout << i << "  " <<j <<endl;
				sol[l][0] = i;
				sol[l][1] = j;
				while ((mat[i][j] == 0) && (j <= m)) {
					mat[i][j] = 2;
					j++;
				}
			
				sum++;
				l++;
				j--;
//				cout << sum << endl;
//				cout << i <<"  " << j <<endl;
			}
			else {
				continue;
			}
		}
	}

	printf ("%d\n", sum);
	for (i = 0; i < l;i++) {
		printf ("%d %d %d\n", sol[i][0],sol[i][1], 0);		} 
	return 0;	
}
				


