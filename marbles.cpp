#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int tc;
	scanf ("%d", &tc);
	while (tc--) {
		long long n;
		long long k;

		scanf ("%lld", &n);
		scanf ("%lld", &k);
	
		if (n == k) {
			printf ("%d\n", 1);
			continue;
		}
 
		long long pro1;
		long long pro2;
		long long mem;
		long long res;
		long long a1 = 1;
		long long a2 = 1;

		pro1 = (n - 1);
		if (k > n / 2) {
			k = n - k;
		}
		pro2 = k - 1;
		mem = pro2;
	
		
		for (int i = 0; i < mem; i++) {
		a1 = a1 * (pro1 - i);
		a1 = a1 / (i + 1);
		
		}		
//		res = a1 / a2;

		printf ("%lld\n", a1);
		
	
	}
	return 0;
}
