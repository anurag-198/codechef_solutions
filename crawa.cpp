#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int tc;
	long long x, y;
	scanf ("%d", &tc);
	while (tc--) {
		int flag = 0;
		scanf ("%lld", &x);
		scanf ("%lld", &y);

		if (x == 0 && y == 0) {
			printf ("YES\n");
			flag = 1;
		}
	
		if (x > 0) {
			if ((x & 1) == 1) {
				if (((y <= x + 1) && y >= 0) || ((y >= -(x - 1)) && y <= 0)) {
					printf ("YES\n");
					flag = 1;
					continue;
				}
			}
		}

		if (x < 0) {
			if ((x & 1) == 0) {
				if ((y >= x) && (y <= -x)) {
					printf ("YES\n");
					flag = 1;
					continue;
				}
			}
		}

		if ((y > 0) && ((y & 1) == 0)) {
			if ((x >= -y) && (x <= (y - 1))) {
				printf ("YES\n");
				flag = 1;
				continue;
			}
		}

		if ((y < 0) && ((y & 1) == 0)) {
			if ((x >= y) && (x <= -(y - 1))) {
				printf ("YES\n");
				flag = 1;
				continue;
			}
		}
		
		if (flag == 0) 
			printf ("NO\n");
	}
	return 0;
}
