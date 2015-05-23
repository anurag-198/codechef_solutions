#include<stdio.h>
int main()
{
long long to,i;
scanf("%lld",&to);
long long a[to];
long long p,q,n;
for (i = 0; i < to; i++) {
scanf("%lld",&a[i]);
}
scanf("%lld",&n);
for (i = 0; i < n; i++) {
scanf("%lld%lld",&p,&q);
p = p-1;
q = q-1;
int j,temp = 1;
for(j = p; j < q; j++){
if(a[j] > a[p]){
temp = 0;
break;
}
}
if(temp == 1){
printf("YES\n");
}
else if(temp == 0){
printf("NO\n");
}
}
return 0;
}
