#include <bits/stdc++.h>

using namespace std;
int cl[100005];
int main() {
	vector<pair<int, int> > v[100005];
	vector<int> d;

	int n,m,p,i,j,x,y;
	scanf ("%d%d%d", &n, &m, &p);
	for (i = 0; i < p; i++) {
		scanf ("%d%d", &x, &y);
		v[x].push_back(make_pair(y, 1));
		if (y > 1) 
			v[x].push_back(make_pair(y - 1, 0));
		if (y < m)
			v[x].push_back(make_pair(y + 1, 0));		
	}

	for (i = 1; i <= n; i++) 
	if (v[i].size()) {
		v[i].push_back(make_pair(1, 0));
		v[i].push_back(make_pair(m, 0));		
		
		for (j = 0; j < v[i].size();j++) 
			 cl[v[i][j].first] = v[i][j].first;
		for (j = 0; j < v[i].size();j++)
			 cl[v[i][j].first] += v[i][j].second;
		
		d.clear();
		
		for (j = 0; j < v[i].size(); j++) d.push_back(v[i][j].first);
		sort(d.begin(), d.end());
		d.resize(unique(d.begin(), d.end()) - d.begin());

		int ret = 0;
		int flag = 0; 

		for (j = 1; j < d.size(); j++) {		
			ret += cl[d[j]] - cl[d[j - 1]];
			if (cl[d[j]] < cl[d[j - 1]]) {
				flag = 1;
				break; 
			}
		}
/*		for (j = 0; j < d.size(); j++) {
			cout << cl[d[j]] << " ";
		}
		cout << endl;*/
		if (flag == 1) 
			cout << "-1" << endl;
		else
			printf ("%d\n", ret);
	} else printf ("%d\n",m - 1); 
	return 0;
}


