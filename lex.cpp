#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int tc,i,j;
	 char a[1005], b[1005], c[1005];
	int max1 = 0;
 
	scanf ("%d", &tc);
	while (tc--) {
		max1 = 0;
		scanf("%s", a);
		int count = 0;
		for (i = 0; a[i] != '\0'; i++) {
			if (a[max1] < a[i]) {
				max1 = i;
			}	
			count++;		
		}	

		strcpy(b,a + max1);
		strcpy(c,a);
		c[max1] = '\0';
		strcat(b,c);
		cout << b;
		
	
		printf ("\n");
	}
return 0;

}
