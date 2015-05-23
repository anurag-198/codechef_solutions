#include <bits/stdc++.h>

# define max 10000001
using namespace std;

long long fc[max]; 

long long check(long long pi, long long m) {
	long long ll = pi + 1;
	
	long long ans,prod;
	if (ll >= m) {
		prod = 0;
	}
	else {
		prod = fc[ll];
	}

	if ((pi % 2) == 0) {
		ans = prod + (m - 1) + ((((pi % m) * ((pi/2)%m)) % m) * ((pi + 1)%m)%m);
	}
	else {
		ans = prod + (m - 1) + ((((pi % m) * ((pi)%m)) % m) * (((pi + 1)/2)%m)%m);
	}
	return ans;
}

void fact (long long  m) {
	int i, k = 1;
	for (i = 2; i < m; i++) {
		k = ((i % m) * (k % m) % m); 
		fc[i] = k;
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	long long i, n, m, sum = 0;
	long long pi, ans = 0;
	cin >> n >> m;

	fact(m);
	
	for (i = 0; i < n; i++) {
		cin >> pi;
		ans += check(pi, m);
		ans = ans % m;
	}
	cout << ans << endl;
	
	return 0;

}
