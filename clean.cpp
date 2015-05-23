#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int i,n,m;

		scanf("%d%d",&n,&m);
		bool boolean[n + 1];

		for(i = 1; i <= n; i++) {
			boolean[i] = 0;
		}
		
		int chf[n + 1];
		int wor[n + 1];

		int k;
		for (i = 1; i <= m; i++) {
			scanf("%d", &k);
			boolean[k] = 1;
		}

		int flag = 0;
		int z = 0;
		int u = 0;

		for (i = 1; i <= n; i++) {
			if ((boolean[i] == 0) && (flag == 0)) {
				chf[z++] = i;
				flag = 1;
				continue;
			}
		
			if ((boolean[i] == 0) && (flag == 1)) {
				wor[u++] = i;
				flag = 0;
				continue;
			} 
		}

		for (i = 0; i < z; i++) {
			printf("%d ",chf[i]); 
		}
		printf("\n");
		
		for (i = 0; i < u; i++) {
			printf ("%d ",wor[i]);
		}
		printf("\n");
	}
	return 0;
}
