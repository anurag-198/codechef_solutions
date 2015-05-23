#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	scanf ("%d", &tc);
	while (tc--) {
		int m,n;
		scanf ("%d", &m);
		scanf ("%d", &n);

		int a[n];
		bool boolean[n];

		for (int k = 0; k < n; k++) {
			boolean[k] = 1;
		}

		int count = 0;
		int i,j;

		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		} 
		count = 0;
		i = 0;
		while (count != m && i < n) { 
			for(j = 0; j < i; j++) {
				if (a[j] == a[i]) {
					boolean[i] = 0;
					break;
				}
			}
			if (boolean[i] != 0)
				count++; 		
			i++;
		}

		int tab[m];
		int l,cn,k = 0;
		int flag = 0;
		int check = 0;
		int pos,apos, maxpos = 0;

		for (j = 0; j < i; j++) {
			if (boolean[j] == 1) 
				tab[cn++] = a[j];
		}
			
		for (j = i; j < n; j++) {
			flag = 0;
			for (k = 0; k < m; k++) {
				if (a[j] == tab[k]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				maxpos = 0;
				check = 0;
				pos = 0;
				for (k = 0; k < m; k++) {
					for(l = j; l < n; l++) {
						if ((tab[k] == a[l]) || (l == (n - 1))) {
							pos = l;
							break;
						}
					}
					if (pos > maxpos) {
						maxpos = pos;
						apos = k;
					}
					if (pos == n - 1) {
						apos = k;
						break;
					}
				}
		
				tab[apos] = a[i];
				count++;
			}
		}	
		printf("%d\n", count);
		} 		
		
	return 0;
}
