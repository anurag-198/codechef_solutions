#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool isprime(int x)
{
    for(int i=2; i<= sqrt(x); i++)
    {
        if ((x%i) != 0)
            return true;
        else
            return false;
    }
}

int no[25];

int main() {
	int tc, n, i,j,flag = 0;
	int count = 0;
	scanf ("%d", &tc);
	while (tc--) {
		count = 0;
		int boolean[25] = {0};
		scanf ("%d", &n);
		for (i = 0; i < n; i++) {
			scanf ("%d", &no[i]);
			if (isprime(no[i]))
				boolean[i] = 1;
		}
	
		for (i = 0; i < n; i++) {
			flag = 0;
			for (j = 0; j < n; j++) {
				if (boolean[i] == 1) 
					break;
				if ((no[i] % no[j] == 0) && (i != j)) {
					flag = 1;
					break;			
				}
			}
			if (flag == 0) {
				boolean[i] = 1;
			}
		}

		for (i = 0; i < n; i++) {
			if (boolean[i] == 1) {
				cout << i << endl;
				count++;
			}
		}
		printf ("%d\n", count);			
	}	
	return 0;
}
