#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sd(a) fastInt(&a)
#define GC getchar_unlocked

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
	int tc,i;
	int q,r;
	int result = 0;
	scanf("%d", &tc);
//	cout << tc << ">>>>";
	while(tc--) {
		int r,q;
		result = 0;
		int n;
		int count = 0;
		scanf("%d", &n);
		result = n / 2048;
		r = n % 2048;
		for (i = 0; i < 16; i++) {
			if ((r >> i) & 1)
				count++;
		}
		result = result + count;
		printf("%d\n", result);
	}	
	return 0;
}
