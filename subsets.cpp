#include <bits/stdc++.h>

using namespace std;
int flag;
int n,a[100];
int vis[100];
void print(int i, int vis[], int n, int num) {
	int k = 0;
	int sum = 0;
	if (i == n) {
		for (k = 0; k < n; k++) {
			sum  = 0;
			if (vis[k]) {
				sum = sum + a[k];
				cout << a[k] << " ";
			}
				if (k == n - 1) {
					cout << endl;
					if (num == sum) 
						flag = 1;
				}
		}
	}
	else {
		vis[i] = 1;
		print(i + 1, vis, n, k);
		vis[i] = 0;
		print(i + 1, vis, n, k);
	}
		
}

int main() {
	int k;
	flag = 0;
	cin >> n;
	cin >> k;
	memset(vis, 0, sizeof(vis));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout <<" subsets are \n";
	print(0, vis, n, k);
	if (flag == 1) {
		cout << "yes\n";
	}
}
