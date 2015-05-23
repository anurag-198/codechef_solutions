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

		scanf ("%lld", &n);

		long long a[n];

		for (i = 0; i < n; i++) {
			scanf ("%lld", &a[i]);
		}

		if ((n == 1) && (a[0] == 0)) {
			cout << "1\n";
			continue;
		}
		pows = 1;	
		for (i = 0; i < n; i++) 
			pows *= 2;

		count = 0;
		for (i = 1; i < pows; i++) {
			sum = 0;
			for (j = 0; j < n; j++) {
				if (i & (1 << j)) {
					sum = sum + a[j];
				}
			}
		
			if (sum == 0) {
				count++;
			}
		}
	
		cout << count << endl;
	}
	return 0;
}
