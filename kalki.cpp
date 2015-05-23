#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,n,a,b,i,j,l;
	scanf ("%d", &tc);
	set < pair<pair<int,int>, int> > s; 
	set <pair<pair<int, int>, int> >:: iterator it;

	for (i = 1; i <= tc; i++)  {
		scanf ("%d", &n);
		l = n;
		for (j = 1; j <= n; j++) {
			scanf ("%d", &a);
			scanf ("%d", &b);
			s.insert(make_pair(make_pair(a,b),j));
		}
		l--;
		for (it = s.begin(); it != s.end(); ++it) {
			
			if (l > 0) {
				cout << (*it).second << " ";
				++it;
				cout << (*it).second << endl;
				--it;
				l--;
			}
		}

		s.clear();
	}
	return 0;
}
