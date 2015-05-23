#include <iostream>
#include <cstdio>

using namespace std;

long long min(int a, int b) {
	return (a < b ? a : b);
}

int main() {
	int tc;
	int n;
	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%d", &n);
		int dp[n + 1];
		dp[1] = 0;
		for (int i = 2; i <= n; i++) {
			dp[i] = 1 + dp[i - 1];
			if (i % 2 == 0) {
				dp[i] = 1 + min(dp[i],dp[i/2]);
			}
			if (i % 3 == 0) {
				dp[i] = 1 + min(dp[i],dp[i/3]);
			}
		}
		printf ("%d\n", dp[n]);
	}
	
	return 0;
}

