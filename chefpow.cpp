#include <bits/stdc++.h>
#define ll long long 
using namespace std;

stack<long long> ss;

void solve(ll n) {
	ll k,j, i = 1;
	k = n;
	while (k != 0) {
		j = 1;
		i = 1;
		while(j <= k) { 
			j = 1 << i;
			i++;
		}
		j = j / 2;

		ss.push(j);
//		cout << j << " ";
		if (j == 0) 
			break;
		k = k - j;
	} 
}

int main () {
	ll n, k;
	scanf ("%lld", &n);
	solve(n);
	while (!ss.empty()) {
		k = ss.top();
		ss.pop();
		printf ("%lld ",k);  	
	}
	printf ("\n");

	return 0;
}
