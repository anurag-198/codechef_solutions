#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long gcd (int a, int b) {
	int rem,p,q,quot;
	p = a;
	q = b;
	a = max(p,q);
	if (a != p) {
		b = p;
	}
	else 
		b = q;

	rem = a % b;

	while (rem != 0) {
		a = b;
		b = rem;
		rem = a % b;
	}
	return b;

}

long long fib(ll a) {
	int val;
	int p = 0;
	int q = 1;
	if (a == 0) {
		return 0;
	}
	if (a == 1) {
		return 1;
	}

	for(ll i = 2; i <= a; i++) {
		val = (p + q) % 1000000007;
		p = q;
		q = val;
	}  

	return val;
}

int main () {
	int tc;
	ll a, b, c, n;

	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%lld%lld", &a, &b);
		c = gcd(a, b);
//		cout << c << endl;
		n = fib(c);
//		cout << n;
		printf ("%lld\n", n);
	}
	return 0;
}
