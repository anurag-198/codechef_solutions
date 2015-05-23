#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc,i, count1 = 0, count2 = 0;
	string s;
	char a,b;
	
	scanf ("%d", &tc);
	while (tc--) {
		count1 = 0;
		count2 = 0;
		cin >> s;
		a = s[0];
		if (s[0] == '-') {
			b = '+';
		}
		else
			b = '-';
		
		for (i = 0; i < s.size(); i += 2) {
			if (s[i] != a) {
				count1++;
			}
			if (s[i] != b) {
				count2++;
			}
		}
		for (i = 1; i < s.size(); i += 2) {
			if (s[i] != b) {
				count1++;
			}
			if (s[i] != a) {
				count2++;
			}
		}

		cout << min(count1, count2) << endl;	
	}

}
