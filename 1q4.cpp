#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int tc, n,i, k, count;
	cin >> tc;
	while (tc--) {
		cin >> n >> k;
		char a[n];
		cin >> a;

		int stp, endp, no;
		stp = 0;
		endp = 0;
		k = k + 1;
		count = 0;
		if (k == 2) {
			for (i = 0; i < n - 1; i++) {
				if (a[i] == a[i + 1]) {
					count++;
					no = a[i + 1] - 48;
					no = no ^ 1;
					a[i + 1] = no + 48; 
				}
			}
			cout << count << endl;
			cout << a << endl;
		}
		else {
			for (i = 0; i < n; i++) {
				
			}
		}
	}
	return 0;
}