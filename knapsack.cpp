#include <bits/stdc++.h>

using namespace std;


int main() {
	int i,n, wt, w, W = 0;
	int k = 0;
	int j = 0;
	long long ans[200005];	
	long long c;

	vector<long long int> one, two;
	scanf ("%d", &n);
	for (i = 0;i < n;i++) {
		scanf ("%d%lld", &wt, &c);
		if (wt == 1) {
			one.push_back(c);
		}
		else {
			two.push_back(c);
		}
		W += wt;
	}
	sort(one.begin(), one.end());
	sort(two.begin(), two.end());

	vector <long long int> ONE = one, TWO = two;
	
	long long cur = 0;
	for (int w = 2; w <= W; w += 2) {
		int cost1 = 0, cost2 = 0;
		if (two.size() >= 1) {
			cost1 = two.back();
		}
		int flag = 1;
		if (one.size() >= 2) {
			cost2 = one.back();
			cost2 += one[one.size() - 2];
		}
		else if (one.size() >= 1) {
			flag = 2;
			cost2 = one.back();		
		}
		if (cost1 > cost2) {
			cur += cost1;
			two.pop_back();
		}
		else {
			cur += cost2;
			if (flag == 1) {
				one.pop_back();
				one.pop_back();
			}
			else {
				one.pop_back();
			}
		}
		ans[w] = cur;
	}

	one = ONE;
	two = TWO;

	cur = 0;
	if (one.size() >= 1) {
		cur =  one.back();
		one.pop_back();
	}
	
	ans[1] = cur;
	for (int w = 3; w <= W; w += 2) {
		int cost1 = 0, cost2 = 0;
		if (two.size() >= 1) {
			cost1 = two.back();
		}
		int flag = 1;
		if (one.size() >= 2) {
			cost2 = one.back();
			cost2 += one[one.size() - 2];
		}
		else if (one.size() >= 1) {
			flag = 2;
			cost2 = one.back();		
		}
		if (cost1 > cost2) {
			cur += cost1;
			two.pop_back();
		}
		else {
			cur += cost2;
			if (flag == 1) {
				one.pop_back();
				one.pop_back();
			}
			else {
				one.pop_back();
			}
		}
		ans[w] = cur;
	}
	
	for (i = 1; i <= W; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
		
return 0;
}
