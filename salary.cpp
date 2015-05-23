#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int tc;
	
	int sum = 0;
	scanf ("%d", &tc);
	while (tc--) {
		sum = 0;
		int n;
		scanf ("%d", &n);
		int m = n;
		int k;
		int min = 10000;
		while (n--) {
			scanf ("%d", &k);
			if (k < min) {
				min = k;
			}
			sum = sum + k;
		}
	printf ("%d\n", sum - m * min);
	}
return 0;
}
