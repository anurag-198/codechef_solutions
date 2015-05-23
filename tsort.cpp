#include <bits/stdc++.h>

using namespace std;

int n[1000005];
int main() {
	int tc,a, i , j;
	memset(n,0,sizeof(n));
	scanf ("%d", &tc);
	while (tc--) {
		scanf ("%d", &a);
		n[a]++;
	}

	for(i = 0; i < 1000001;i++) {
		if (n[i] > 0) {
			for(j = 0; j < n[i]; j++)
				printf ("%d\n",i); 
		}
	}

	return 0;
}
