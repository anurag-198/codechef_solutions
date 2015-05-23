#include <iostream>
#include <cstdio>
#include <cstring>

void swap (char *x, char *y)
{
char temp = *x;
*x = *y;
*y = temp;
}

int main()
{
int t, i;
scanf("%d", &t);

for (i = 1; i <= t; i++) {
char a[15], max, min, x, y, max_ind = 0, min_ind = 0, b[15];
int j, k;
scanf("%s", a);
max = a[0];
min = a[0];
x = a[0];
y = a[0];
j = strlen(a);

for (k = 0; k <= j; k++) {
b[k] = a[k];
}

for (k = 0; k < j; k++) {
if (a[k] > max) {
max = a[k];
max_ind = k;
}
if (a[k] < min && (int)a[k] != 48) {
min = a[k];
min_ind = k;
}
}
//printf("%c %c\n", max, min);
swap(&a[0], &a[min_ind]);
printf("Case #%d: %s ", i, a);
swap(&b[0] , &b[max_ind]);
printf("%s\n", b);
}

return 0;
}
