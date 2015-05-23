nclude <bits/stdc++.h>
 
using namespace std;
 
struct fat{
    long long a;
    char ch;
}f[100005] ;
bool cmp(fat c, fat b){
    return (c.a < b.a);
}
 
int main() {
	long long tc, n,z ,i, m, a,k;
//	long long loc[100005];
	long long sum;
//	char ch[100005];
	char c;
 
	scanf ("%lld", &tc);
	while (tc--) {
 
		scanf ("%lld%lld", &n, &m);
//		memset(ch,'0',n + 5);
		k = 0;
		sum = 1;
		z = m;
		while (m--) {
			scanf(" %c",&c);
			scanf("%lld", &a);
			f[k].a = a;
			f[k].ch = c;
            k++;
		}
 
		sort(f, f + z,cmp);
        //for (i = 0; i < z; i++){
          //      cout << f[i].a << "   " << f[i].ch << endl;
        //}
 
		if ((z == 1) || (z == n)) {
			printf ("%d\n", 1);
			continue;
		}
        //cout << k << endl;
		for (i = 0; i < k - 1; i++) {
			if (f[i].ch != f[i + 1].ch) {
				sum = (sum * (f[i + 1].a - f[i].a)) % 1000000009;
 
			}
		}
 
		printf ("%lld\n", sum);
	}
 
	return 0;
}
 
