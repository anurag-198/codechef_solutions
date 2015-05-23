#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	int n;
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		int a[n][2];
		int sum1 = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++)
				scanf ("%d", &a[i][j]);
		}	
	
		for (int i = 0; i < n; i++) 
			sum1 = sum1 + (a[i][0] - a[i][1]); 
		printf("%d\n",sum1);
	}

	return 0;
}
