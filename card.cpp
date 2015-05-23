#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[26];
long long ans,x;
string s;

bool acompare (int lhs,int rhs) { return lhs > rhs;}

int main() {
	int n,i, k;	
	scanf ("%d%d", &n, &k);
	cin >> s;
	for (i = 0; i < s.size(); i++) {
		a[s[i] - 'A']++;
	}
	ans = 0;
	sort(a, a + 26, acompare);

	for (i = 0; k > 0; i++) {
		x = min(k, a[i]);
		k = k - x;
		ans = ans + x * x;
//		cout << ans <<" "<< k << " "<< x << endl;
	}
	cout << ans << endl;
	return 0;
}
