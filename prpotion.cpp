#include <bits/stdc++.h>

using namespace std;

int maxi(long long a, long long b, long long c) {
	if ((a >= b) && (a >= c)) {
		return 1;
	}

	if ((b >= c) && (b >= a))
		return 2;
	if ((c >= a) && (c >= b))
		return 3;

}

long long maximum(long long a, long long b) {
	return (a > b ? a : b);
}

int main() {
	int tc, i;
	scanf ("%d", &tc);
	int R,G,B,M;
	long long max1 = 0;
	long long max2 = 0;
	long long max3 = 0;
	int max = 0;
	int index = 0;

	long long r[105],g[105],b[105],m[105],sol;

	
	while(tc--) {
		scanf ("%d%d%d%d", &R, &G, &B, &M);
		max1 = 0;
		max2 = 0;
		max3 = 0;
		max = 0;
		
		for (i = 0; i < R; i++) {
			scanf ("%lld", &r[i]);
			if (max1 < r[i]) {
				max1 = r[i];
			}
		}
		for (i = 0; i < G; i++) {
			scanf ("%lld", &g[i]);
			if (max2 < g[i]) {
				max2 = g[i];
			}
		}
		for (i = 0; i < B; i++) {
			scanf ("%lld", &b[i]);
			if (max3 < b[i]) {
				max3 = b[i];
			}
		}	
		
	while (M--) {
//		cout << max1 << max2 << max3<<"-----";
		index = maxi(max1, max2, max3);
//		cout << index <<"----";

		if (index == 1) {
			max1 = 0;
			for (i = 0; i < R; i++) {
				r[i] = r[i] / 2;
				if (max1 < r[i])
					max1 = r[i];
			}
		}
		if (index == 2) {
			max2 = 0;
			for (i = 0; i < G; i++) {
				g[i] = g[i] / 2;
				if (max2 < g[i])
					max2 = g[i];
			}
		}
		if (index == 3) {
			max3 = 0;
			for (i = 0; i < B; i++) {
				b[i] = b[i] / 2;
				if (max3 < b[i]) {
					max3 = b[i];
				}
			}
		}
	   }
//		cout <<max1<<max2<<max3<<"------";
		sol = maximum(maximum(max1, max2), max3);
		printf ("%lld\n", sol);
	}
	return 0;
}
