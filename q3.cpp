#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int tc, i;
	scanf ("%d", &tc);
	ll a,g, b, c;
	int flag = 0;

	while (tc--) {
		flag = 0;
		scanf ("%lld%lld", &a, &b);
		g = __gcd(a,b);
		b = b / g;

		while (g != 1) {
			g = __gcd(a, b);
			b = b / g;
		}

		if (b == 1) {
			cout <<"Yes\n";
		}
		else
			cout <<"No\n";

	
	}
	return 0;

}

/*	for (i = 2; i <= b; i++) {
			if (b % i == 0) {
				if ((a % i) != 0) {
					flag = 1;
					break;
				}
				while ((b % i) == 0) {
					b = b / i;
				}
			}
		}
		if (flag == 1) {
			printf("No\n");
		}
		else {
			printf("Yes\n");
		}*/