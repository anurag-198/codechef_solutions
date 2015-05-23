#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc,n,k,a,i;
	int b[22];
	int rem, u, qout,count;
	int sum = 0;
	int max = 0;

	vector<int> v1;
	vector<int> v2;
	vector<int>::iterator it;

	scanf ("%d", &tc);
	
	while (tc--) {
		sum = 0;
		count = 0;
		scanf ("%d", &n);
		scanf ("%d", &k);
		for (i = 0; i < n; i++) {
			scanf ("%d", &b[i]);
			u = 0;
							
			sum = sum + b[i];
			if (max < b[i]) {
				max = b[i];
			}
		
		}

		rem = sum % k;
		qout = sum / k;

		if (rem != 0) {
			printf ("no\n");
			continue;
		}
		if (max > qout) {
			printf ("no\n");
			continue;
		}		

		for (i = 0; i < n; i++) {
			for (it = v1.begin(); it != v1.end(); ++it) {
				u = b[i] + (*it);
				if (u <= qout) {
					v2.push_back(u);
				}
			}	

			v1.push_back(b[i]);
			while(!v2.empty()) {
				v1.push_back(v2.back());
				v2.pop_back();
			}
		}

		for (i = 0; i < v1.size(); i++) {
			if (v1[i] == qout)
				count++;
		}
		if (count == k) {
			printf ("yes\n");
		}

	}
	return 0;

}

