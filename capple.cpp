#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, a, b;

	scanf ("%d", &tc);
	set<int> s;

	while (tc--) {
		scanf ("%d", &a);
		for (int i = 0; i < a; i++) {	
			scanf ("%d", &b);
			s.insert(b);
		}		
			printf ("%d\n",int(s.size())); 	
			s.clear();
	}
	return 0;
}
