#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc, n, i;
	char a[1005];
	int flag[3] = {0};

	scanf ("%d", &tc);
	while (tc--) {
		flag[0] = 0;
		flag[1] = 0;

		scanf ("%d", &n);
		scanf ("%s", a);

		for (i = 0; i < n; i++) {
			if(a[i] == 'Y') {
				flag[0] = 1;
				break;
			}
			if (a[i] == 'I') {
				flag[1] = 1;
				break;
			}
		}

		if (flag[0] == 1)
			printf ("NOT INDIAN\b");
		else if (flag[1] == 1)
			printf ("INDIAN\b");
		else 
			printf("NOT SURE\b");
	}
	return 0;
}
