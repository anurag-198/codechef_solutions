#include <bits/stdc++.h>

using namespace std;

long long sum[500005];
long long dp[500005];
long long a[500005];

int main() {
	long long n,i,j, k,l,sum1,sum2;
	scanf ("%lld", &n);
	long long flag1 = 0; 
	long long flag2 = 0;

	dp[n - 1] = 0;

	for (i = 0; i < n; i++) { 
		scanf ("%lld", &a[i]);			
	}

	
	sum[0] = a[0];
	for (i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}

	sum1 = sum[n - 1] / 3;

	for (j = n - 2; j >= 0; j--) {
		if (2 * sum1 == sum[j]) 
			dp[j] = dp[j + 1] + 1;
		else 
			dp[j] = dp[j + 1];
	}

	long long result = 0;
	int flag = 0;
	for (i = 0; i < n; i++) {
		if (sum1 == sum[i]) {
			i++;
			while(2 * sum1 != sum[i]) {
				i++;
			}	
			result += dp[i];
		}
	}

		printf("%lld\n",result) ;		
	
	return 0;
}
	


