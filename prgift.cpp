#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	int m;
	scanf ("%d", &tc);
	while (tc--) {
		int count = 0;
		int n,k;
		scanf ("%d", &n);
		scanf ("%d", &k);
		int flag = 0;		


		for (int i = 0; i < n; i++) {
			scanf ("%d", &m);
			if ((m & 1) == 0) {
				count++;
			}	
		}
		
		if (count >= k) {
			printf ("YES\n");
		}
		else
			printf ("NO\n");
	}
	return 0;
}
