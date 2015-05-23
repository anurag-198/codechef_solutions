#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector <bool> isprime;

void sieve(int n) {
	isprime.resize(n);
	
	for (int i = 0; i < n; i++) 
		isprime[i] = 1;

	isprime[0] = 0;
	isprime[1] = 0;
		
	for (int i = 2; i * i < n; i++) {
		if (isprime[i]) {
			for (int j = 2; j * i <= n; j++) {
				isprime[i * j] = 0;
			} 

		}
	}
	return;
}
int main() {
	sieve(100001);
	int tc;
	scanf ("%d", &tc);

	while (tc--) {
		int ll, ul;
		scanf ("%d", &ll);
		scanf ("%d", &ul);

		vector <bool> isprm;
		isprm.resize(ul - ll + 1);

		for (int i = 0; i < ul - ll + 1; i++) {
			isprm[i] = 1;
		}
		
		for (int i = 2; i * i <= ul; i++) {
			if (isprime[i]) {
			int j = ll/i;
			for (;i * j <= ul; j++) {
				if (i * j >= ll && j > 1) {
					isprm[i * j - ll] = 0;
				}
			}
		}
		}

		for (int i = ll; i <= ul; i++) {
			if (isprm[i - ll] && i > 1) {
				printf("%d\n", i);
			}

		}
		isprm.clear();
	}
	return 0;
}
