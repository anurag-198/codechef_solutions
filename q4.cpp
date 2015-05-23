#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int tc,i, n, k, no, count;
	cin >> tc;
	while (tc--) {
		count = 0;
		cin >> n >> k;
		char a[n + 1];

		k = k + 1;
		cin >> a; 

		if (k == 2) {
			char a1[n + 1];
			char a2[n + 1];
			a1[0] = '0';
			a2[0] = '1';
			for (i = 1; i < n; i++) {
				no = a1[i - 1] - 48;
				no = no ^ 1;
				a1[i] = no + 48;
				no = a2[i - 1] - 48;
				no = no ^ 1;
				a2[i] = no + 48;
			}
			a1[n] = '\0';
			a2[n] = '\0';

			int cnt1, cnt2;
			cnt1 = 0;
			cnt2 = 0;
			for (i = 0; i < n; i++) {
				if (a[i] != a1[i])
					cnt1++;
				if (a[i] != a2[i])
					cnt2++;
			}

			if (cnt1 < cnt2) {
				cout << cnt1 << endl;
				cout << a1 << endl;
			}
			else {
				cout << cnt2 << endl;
				cout << a2 << endl;
			}
	
		continue;
		}

		int cn, stp, enp, qout, rem;
		stp = 0; 
		enp = 0;
		count = 0;
		for (i = 0; i < n - 1; i++) {
			cn = 0;
			while (a[i] == a[i + 1]) {
				enp = i+1;
				i++;
				cn++;
				if (cn >= k - 1) {
					count++;
					if (a[i] == a[i + 1]) {
						if (a[i] == '0')
							a[i] = '1';
						else
							a[i] = '0';
					}
					else {
						if (a[i - 1] == '1')
							a[i - 1] = '0';
						else
							a[i - 1] = '1';
					}
				}
			}

	/*		if (cn >= k - 1) {
				qout = cn / (k - 1);
				rem = cn % (k - 1);
				count += qout;
				if ((rem == 0) && (qout == 1)) {
					no = a[(stp + enp) / 2] - 48;
					no = no ^ 1;
					a[(stp + enp) / 2] = no + 48; 
				}
				if ((rem > 0) && (qout > 0)) {
					while (qout) {
						no = a[stp + k - 1] - 48;
						no = no ^ 1;
						a[stp + k - 1] = no + 48;
						stp = stp + k;
						qout--;
					}
				}
			} */

		}

		cout << count << endl;
		cout << a << endl;

	}
	return 0;
}