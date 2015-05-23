#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007
#define ll long long

ll fast_exp(int base, int exp) {
    ll res = 1;
    while(exp > 0) {
       if(exp % 2 == 1) res = (res * base) % MOD;
       base = (base * base) % MOD;
       exp /= 2;
    }
    return res%MOD;
}

int main() {
	std::ios::sync_with_stdio(false);
	long long n, m, a,b,c,d, ini2;
	int i, k;
	cin >> n >> m >> k;
	
	long long ini = fast_exp(m,n);	
	
	for (i = 1; i <= k; i++) {
		cin >> a >> b >> c >> d;
		if (a == 0) {
			ini = ini + 1;
		}
		else {
			ini2 = fast_exp(m , a - 1);
			ini += ini2;
		}
		if (b < n) {			
			ini2 = fast_exp(m, n - b);
			ini += ini2;
		}
		
	}
	cout << ini << endl;

	return 0;
}

