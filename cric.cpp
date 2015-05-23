#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc,n,m,a,b,prev, flag = 0;
	int count = 0;

	scanf ("%d", &tc);
	
	while (tc--) {
		scanf ("%d%d", &n, &m);
		while (m--) {
			scanf ("%d%d", &a, &b);
			if (count == 1) {
				if (a != prev) {
					flag = 1;
				}
			}
			prev = a;
			count = 1;	
			
		}		
		
			if (n - m > 1) {
				cout << "YES\n";
				continue;
			}
			if (flag == 0) {
				cout <<"YES\n";
			}
			else if (flag == 1) {
				cout <<"NO\n";
			}
	}
	return 0;
}
