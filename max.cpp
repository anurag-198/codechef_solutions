#include <iostream>
#include <cstdio>
#include <cassert>

using namespace std;

#define sd(a) fastInt(&a)
#define GC getchar_unlocked
#define max 10005

inline void fastInt(int *a)
{
    register char c=0;
    register int neg = 1;
    while (c<33) c=GC();
    if(c == '-'){
        neg = -1;
        c=GC();
    }
    *a=0;
    while (c>33)
    {
        *a=(*a<<1)+(*a<<3)+c-'0';
        c=GC();
    }
    *a *= neg;
}


int main() {
	int tc;
//	sd(tc);
	scanf ("%d", &tc);
	assert(tc >= 1 && tc <= 100);
	while (tc--) {
		int k;
	//	sd(k);
		scanf("%d", &k);
		assert (k <= 100 && k >= 1);
		int maxn = 0;
		int ans;
		int a[max] = {0};
		int n;
		while(k--) {
	//		sd(n);
			scanf ("%d", &n);
			assert(n >= 1 && n <= 10000);
			a[n]++;
			if (a[n] > maxn) { 
				maxn = a[n];
				ans = n;			
			}
			if (a[n] == maxn && n < ans) {
				ans = n;
			}
		}
		
		printf ("%d %d\n", ans,maxn);

	}
	return 0;
}
