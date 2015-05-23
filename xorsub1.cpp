#include <bits/stdc++.h>

using namespace std;

int main () {
	int tc,n,k,i,j;
	int a[1004];
	int dp[1001][1024];
	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%d%d", &n,&k);
		for (i = 1; i <= n; i++) {
			scanf ("%d", &a[i]);
		}
		dp[0][0] = 1;
		for (i = 1; i <= n; i++) {
			for (j = 0; j <= 1023; j++) {
				dp[i][j] = (dp[i - 1][j] | dp[i - 1][j ^ a[i]]);
			}
		}
		int maxim = 0;
		for (i = 0; i <= n; i++) 
			for (j = 0; j <= 1023; j++)  {
			maxim = max(maxim, dp[i][j] * j ^ k); 	
			dp[i][j] = 0;
		}

		cout << maxim << endl;
				
	}
	return 0;
}
