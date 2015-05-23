#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<pair<int,int>, string> ss;
int main() {
	int n, i;
	int flag = 0;
        int maxi = 0;
	scanf ("%d", &n);
	int h[n + 1], maxim[n + 1];
 	for (i = 1; i <= n; i++) {
		scanf ("%d", &h[i]);
	}

	int q,c,b;
	scanf ("%d", &q);
	while(q--) {
		flag = 0;
		scanf ("%d%d", &c, &b);
		if ((c - b) == 1) {
			printf ("YES\n");
			continue;
		}
		
		if (ss.find(make_pair(c,b)) != ss.end()) {
			cout << ss[make_pair(c,b)] << endl;
			continue;	
		}

		maxi = h[c];
		for (i = c; i < b; i++) {
			maxi = max(h[i], maxi);
			if (maxi > h[c]) {
				flag = 1;
				break;
			}
		}
	
		if ((flag)) {
			printf ("NO\n");
			ss.insert(make_pair(make_pair(c,b),"NO"));
		}
		else {
			printf ("YES\n");
			ss.insert(make_pair(make_pair(c,b),"YES"));
		}
	}
	return 0;
}
