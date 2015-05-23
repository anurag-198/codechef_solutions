#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc, i,max = 0;
	int flag = 0;
	int sum;
	int n,m, l;
	scanf ("%d", &tc);
	while (tc--) {
		sum = 0;
		flag = 0;
		scanf ("%d%d", &n, &m);
		int c[105];
		int rem[105];

		for (i = 0; i < n; i++) {
			scanf ("%d", &c[i]);
			if (max < c[i]) {
				max = c[i];
			}
		}		
		
		l = m;

		for (i = 0; i < n; i++) {
			rem[i] = (max - c[i]);
			l = l - rem[i];
		}
	
		if (l < 0) {
			printf ("No\n");
		}
		else if (l == 0) {
			printf ("Yes\n");
		}
		else if ((l > 0) && ((l % n) == 0)) {
			printf ("Yes\n");
		}
		else 
			printf ("No\n");

/*		while (sum <= m) {			
			if (sum == m) {
				printf ("Yes\n");	
                        	flag = 1;
				break;
			}
			else {
				sum = sum + n;
			}
		}

		if (flag == 0) {
			printf ("No\n");
		}
		*/
	}

	return 0;

}
