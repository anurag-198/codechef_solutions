#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool isprime(int x)
{
  if (x == 1) return 1;
  if (x < 2) return false;
  for(int i=2; i<= sqrt(x); i++) {
    if ((x%i) == 0) return false;
  }
  return true;
}

int no[25];

int main() {
        int tc, n, i,j,flag1,flag2;
        int count = 0;
        scanf ("%d", &tc);
        while (tc--) {
        	
		count = 0;
		flag1 = 0;
                flag2 = 0;

		scanf ("%d", &n);

                for (i = 0; i < n; i++) {
                        scanf ("%d", &no[i]);
                	if (isprime(no[i]))
				flag1++;
			if (flag1 == 2) 
				break;
		}

		if (flag1 == 2) 
			printf ("%d\n", n);
		else  {
			printf ("%d\n", 0);
			}
        }
        return 0;
}

