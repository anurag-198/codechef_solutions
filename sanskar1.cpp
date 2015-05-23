#include <bits/stdc++.h>

using namespace std;

int main () {
	long long tc, n, k, i, j;
	long long pows;
	scanf ("%lld", &tc);
	while (tc--) {
		long long sum = 0;
		long long sum1 = 0;
		long long count = 0;

		scanf ("%lld%lld", &n , &k);
		long long a[n];
		for (i = 0; i < n; i++) {
			scanf ("%lld", &a[i]);
			sum1 += a[i];
		}

		if ((sum1 % k != 0) || (n < k)) {
			printf ("no\n");
			continue;
		}

		sum1 = sum1 / k;
		pows = 1;
		for (i = 0; i < n; i++) 
			pows *= 2;

		for (i = 0; i < n; i++) {
			if (a[i] == 0) 
				a[i] = LONG_LONG_MAX;
		}
		count = 0;
		for (i = 1; i < pows; i++) {
			sum = 0;
			for (j = 0; j < n; j++) {
				if (i & (1 << j)) {
					sum = sum + a[j];
			//		cout << a[j] << ",";
				}
			}
		//	cout << sum << endl;

			if (sum == sum1) {
				count++;
				for (j = 0; j < n; j++) {
					if (i & (1 << j)) {
						a[j] = LONG_LONG_MAX;
					}
				}
			}
		}
	
		if (count == k || sum == 0) {
			printf ("yes\n");
		}
		else { 
			printf ("no\n");
		}
	}
	return 0;
}
