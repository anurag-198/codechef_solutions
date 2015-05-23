#include <bits/stdc++.h>

using namespace std;


bool comp (int i, int j) {
	return (i > j);	
}
int main() {

	std::ios::sync_with_stdio(false);
	int tc;
	int n, i, flag;
	long long sum;
	cin >> tc;
	while (tc--) {
		sum = 0;
		flag = 0;
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < 2) {
				flag = 1;
			}
		}

		sort (a, a + n, comp);

		for (i = 0; i < n - 1; i++) {
			sum += a[i];
		}

		sum += 2;

		if (flag == 1) {
			cout << "-1\n";
		}
		else 
			cout << sum << endl;
	}
	return 0;
}