#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int tc, n, i,k, maxi;
	map <int, int> m;
	cin >> tc;
	while (tc--) {
		maxi = 0;
		scanf ("%d", &n);
		for (i = 0; i < n; i++) {
			cin >> k;
			m[k]++;
		}
		
		map <int,int>::iterator it;
		for (it = m.begin(); it != m.end(); it++) {
			maxi = max(maxi, it->second);
		}
		cout << n - maxi << endl;
	m.clear();
	}
	return 0;
}
