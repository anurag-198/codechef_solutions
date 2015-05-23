#include <bits/stdc++.h>
#define inf 999999
using namespace std;

int main() {
int n,m,dis,a,b,c, i,j;

scanf ("%d%d%d", &n, &m, &dis);

int graph[102][102];
memset(graph, 0, sizeof(graph));
int dist[n + 1][n + 1];

for (i = 1; i <= n; i++) {
for (j = 1; j <= n; j++) {
dist[i][j] = inf;
}
}


for (i = 0; i < m; i++) {
scanf ("%d%d%d", &a, &b, &c);
dist[a][b] = c;
}

int k;

for (k = 1; k <= n; k++) {
for (i = 1; i <= n; i++) {
for (j = 1; j <= n; j++) {
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
