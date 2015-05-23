//#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cassert>

using namespace std;

const int maxa = 100000;

struct frog{
	int id;
	int x;
}frogs[maxa];

bool compx(const frog &a, const frog &b) {
	return (a.x < b.x);
}

int dis[maxa];

int main() {
	int n,k,p,i,j;
	assert(scanf ("%d%d%d",&n,&k,&p) == 3 && 1 <= n && n <= maxa && 1 <= p && p <= maxa && 0 <= k && k <= 1000000000);
	for (i = 0; i < n; i++) {
		frogs[i].id = i;
		assert(scanf ("%d", &frogs[i].x) == 1 && 0 <= frogs[i].x && frogs[i].x <= 1000000000);
	
	}

	sort(frogs, frogs + n,compx);
	
	for (i = 0; i < n; i++) {
		j = i + 1;
		dis[frogs[i].id] = i;

		while (j < n && frogs[j].x <= frogs[j - 1].x + k) {
			dis[frogs[j].id] = i;
			++j;
		}
		
		i = j - 1;
	}


	for (i = 0; i < p; i++) {
		int a,b;
		assert(scanf("%d%d", &a,&b) == 2 && 1 <= a && a <= n && 1 <= b && b <= n);
		a--;
		b--;
		printf("%s\n", dis[a] == dis[b] ? "Yes" : "No");
	} 
	return 0;

}
