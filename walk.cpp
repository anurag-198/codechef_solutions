#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, n, i;
	long long d;
	long long sum;
	scanf ("%d", &tc);
	while (tc--) {
		sum = 0;
		scanf ("%d%lld",&n, &d); 
		
		if (n == 1) {
			for (i = 1; i < d; i++) {
				sum = sum + (i * i);
			}
		}

		if (n == 2) {
			for (i = 1; i < d; i += 2) {
				sum = sum + (i * i);
			}
		}

		cout << sum << endl;
	}
	return 0;
}
