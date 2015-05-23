#include <bits/stdc++.h>

using namespace std;
long long mod(long long a, long long b) {
	if (a >= b)
		return (a - b);
	else 
		return (b - a);
}

int main() {
	long long tc, n, i;
	
	long long lad[10005][2];
//	int right[10005];
	long long din[5005][2];
	long long f,g;
	scanf ("%lld", &tc);
	long long k = 0;
	while (tc--) {
		k = 0;
		f = 0;
		g = 0;
		long long a;
		scanf ("%lld", &n);
		for(i = 0; i < n; i++) {
			scanf ("%lld", &a);
			if (a < 0) {
				din[f][0] = -a;
				din[f][1] = i;
				f++;
			}
			else {
				lad[g][0] = a;
				lad[g][1] = i;
				g++;
			}
		} 
		int m = f;
		int n = g;
		
		i = 0;
		int j = 0;
		long long sum = 0;
		while(i <= m) {
			if (lad[i][0] <= din[j][0]) {
				sum = sum + lad[i][0] * mod(lad[i][1],din[j][1]);
//				cout << sum << "  ===  ";
				din[j][0] = din[j][0] - lad[i][0];
				lad[i][0] = 0;
//			cout << din[j][0] << "  " << lad[i][0] << " ===";
				i++;
				if (din[j][0] == 0) 
					j++;
			}
			else {
				sum = sum + din[j][0] * mod(lad[i][1],din[j][1]);
//				cout << sum << "  ===  " << din[j][0] <<"*";
				lad[i][0] = lad[i][0] - din[j][0];
				din[j][0] = 0;
				j++;
				if (lad[i][0] == 0)
					i++;
			}

		}
		
		
		printf ("%lld\n", sum);
	}
	return 0;
}
