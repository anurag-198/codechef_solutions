#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, i, j;
	scanf ("%d", &n);

	char a[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf (" %c", &a[i][j]);
		}
	} 
	
	int flag = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			int count = 0;
			if (i > 0) {
				if (a[i - 1][j] == 'o') 
					count++; 
			}
			
			if (j > 0) {
				if (a[i][j - 1] == 'o')
					count++;
			}

			if (i < n - 1) {
				if (a[i + 1][j] == 'o')
					count++;
			}

			if (j < n - 1) {
				if (a[i][j + 1] == 'o')
					count++;
			}
			if (count & 1) {
				flag = 1;
				flag2 = 1;
				printf ("NO\n");
				break; 
			}
		}
			if (flag2) {
				break;
			}
	}

		if (flag == 0) {
			printf("YES\n");
		}

return 0;
}
