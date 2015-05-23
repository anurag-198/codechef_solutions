#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n, i;
	long long s, count;
	int tc;

	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%lld%lld", &n, &s);
		count = 0;

		if ((2 * s) == (n * (n + 1))) {
			cout <<"0\n";
			continue;
		}
		i = 1;
		long long diff = (n * (n + 1) / 2) - s;
		
		for (i = 0; i < diff; ) {
			count++;
			i = i + (--n);
		}
		cout << count << endl;

	}
	return 0;
}
