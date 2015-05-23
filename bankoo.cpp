#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	long long tc, n, i,a,b;
	scanf ("%lld", &tc);
	while (tc--) {
		scanf ("%lld", &n);
		for (i = 0; i < n; i++) {
			scanf ("%lld%lld",&a,&b);
			cout << ((100 - b) * a)/ 100 << endl;
		}
	}
	return 0;
}
