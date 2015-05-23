#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int i, n, m;
		scanf("%d%d", &n, &m);
		
		int a[n + 1];
		int boolean[n + 1];

		
		for (i = 1; i <= n; i++) {
			boolean[i] = 1;
		}

		for (i = 1; i <= n; i++) {
			scanf ("%d", &a[i]);
			if (a[i] == i) {
				boolean[i] = 0;
			}
		}

		int l,b;
		int max = 0;
		int min = 100005;
		int max1;
		int min1;
		int flag1 = 0;

		for (i = 1; i <= m; i++) {
			if (boolean[i] == 1) {
				min1 = i;
				while (boolean[i] == 1) {
					i++;
					if (a[i] >= max)
						max = a[i];
					if (a[i] <= min)
						min = a[i];
					max1 = i;
				}
				if ((max > max1) || (min < min1)) {
					flag1 = 1;
					break;
				}	
			}
		}
		int j;

		for (i = 1; i <= m; i++) {
			scanf("%d%d", &l,&b);

			for (j = l; j <= b; j++) {
				if (l == b) {
					break;
				}
				if (boolean[j] == 1) {
					boolean[j] = 0;
				}
			}
		}
		
		if (flag1 == 1) {
			printf("Impossible\n");
			continue;
		}


		int flag = 0;
		for (i = 1; i <= n; i++) {
			if (boolean[i] == 1) {
				printf("Impossible\n");
				flag = 1;
				break;
			}
		}

		if (flag == 0) 
			printf("Possible\n");
	}

return 0;
}
