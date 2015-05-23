#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, n;
	long long s, count;
	int t;

	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%d%lld", &n, &s);
		count = n;
		t = n - 1;

		if ((2 * s) == (n * (n + 1))) {
			cout <<"0\n";
			continue;
		}

		while (count <= s) {
			count += t;
			t--;
		}

		if (count == s)
			cout << t << endl;
		else 
			cout << t + 1 << endl;

	}
	return 0;
}
