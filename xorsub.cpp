#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,	n, k, a, max = 0;
	scanf ("%d", &tc);
	set<int> s;
	set<int>:: iterator it;
	while (tc--) {
		max = 0;
		scanf ("%d", &n);
		scanf ("%d", &k);
		while (n--) {
			scanf ("%d" , &a);
			s.insert(a);
			for(it = s.begin(); it != s.end(); ++it) {
				s.insert(a ^ (*it));
			}
			
		}
		for(it = s.begin(); it != s.end(); ++it) {
				a = ((*it) ^ k);
                               if (max < a)
					max = a;
//				cout << *it;
                        }

	printf ("%d\n", max);
		s.clear();
	}
	return 0;
}
