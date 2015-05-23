#include <bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

ll po[100001];

int main() {
	
	ll n, i, tc;
	ll sum;
	cin >> tc;
	po[0] = 1;
	for (i = 1; i < 100001; i++) {
		po[i] = (po[i - 1] * 2) % m;
	}

	while (tc--) {
		cin >> n;
		sum = 0;
		long long a[n];
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort (a, a + n);
		sum = 0;
		for (i = n - 1; i >= 0; i--) {
			sum = (sum + ((po[i]* ((a[i] - a[n - 1 - i])%m)) % m)) % m;
		}

		if (sum < 0) {
			sum += m;
		}
				
		cout << sum << endl;
	}

	return 0;
}