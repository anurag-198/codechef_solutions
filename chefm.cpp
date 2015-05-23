#include <bits/stdc++.h>
#define inf 99999
using namespace std;

int main() {
	int n,m,dis,a,b,c, i,j;

	scanf ("%d%d%d", &n, &m, &dis);

	int graph[102][102] = {0};
	int dist[n + 1][n + 1];

	for (i = 0; i < m; i++) {
		scanf ("%d%d%d", &a, &b, &c);
		graph[a][b] = c;
		graph[b][a] = c;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == j)
				graph[i][j] = 0;
			else {
				if (graph[i][j] == 0)
					graph[i][j] = inf;
			}	
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			dist[i][j] = graph[i][j];
		}
	}

	int k;

	for (k = 1; k <= n; k++) {
		for (i = 0; i <= n; i++) {
			for (j = 0; j <= n; j++) {
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	
	int r,p,q;
	scanf ("%d", &r);
	while (r--) {
		scanf ("%d%d", &p, &q);
		if (dist[p][q] <= dis)
			printf ("YES\n");
		else 
			printf ("NO\n");
	}

	return 0;
}
