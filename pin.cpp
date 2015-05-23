#include <iostream>
#include <cstdio>

using namespace std;

int gcd(long long a, long long b) {
	if (b == 0) 
		return a; 
	else 
		return gcd(b, a % b);
} 
int main () {
	long long tc, i, no = 1;
	scanf ("%lld", &tc);
	
	while (tc--) {
		long long n,k, m, r,lcm;
		long long k1 = 1;
		no = 0;
		scanf ("%lld%lld", &n, &m);
		for (i = 0; i < m; i++) {
			scanf ("%lld", &k);
			r = k;
			k = gcd(k1, k);
			lcm = (k1 * r) / k;
			k1 = lcm;
		}
			
		
		printf ("%lld\n",(n / lcm)); 
	}
return 0;
}
