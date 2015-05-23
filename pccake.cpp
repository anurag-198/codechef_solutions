#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, i,maxi, len;
	int arr[27];
	char a[51];

	scanf ("%d", &tc);
	while (tc--) {
		for (i = 0; i < 26; i++) {
			arr[i] = 0;
		}

		scanf ("%s", a);
		len = 0;
		for (i = 0; a[i] != '\0'; i++) {
			arr[a[i] - 97]++;	
			len++;
		}		
		maxi = 0;
		for (i = 0; i < 26; i++) {
			maxi = max(maxi, arr[i]);
		//	cout << arr[i] << " ";
		}
//		cout << maxi << " " << len << endl;

		if (2 * maxi == len) {
			printf ("YES\n");
		}
		else 
			printf ("NO\n");
	}

	return 0;
}
