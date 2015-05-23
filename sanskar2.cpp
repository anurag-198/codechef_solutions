#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
long long int t,n,i,bit,j,k,l,ans,count,result,sum,temp,cursum;
cin >> t;
while(t--) {
cin >> n >> k;
 
long long int a[n];
sum = 0;
for(i = 0; i < n; ++i) {
scanf("%lld", &a[i]);
sum += a[i];
}
 
if((sum%k != 0) || (n < k)) {
printf("no\n");
continue;
}
 
sum = sum/k;
l = 1;
for(i = 0; i <n ;++i) {
l *= 2;
}
count = 0;
 
for (i = 0; i < n; ++i) {
if (a[i] == 0)
a[i] = LONG_LONG_MAX;
}
 
for(i = 1; i < l; ++i) {
cursum = 0;
for(j = 0; j < n; j++) {
if((i & (1<<j))) {
cursum += a[j];
}
}
 
if(cursum == sum) {
count++;
for(j = 0; j < n; j++) {
if(i & (1<<j)) {
a[j] = LONG_LONG_MAX;
}
}
}
}
if(count == k || sum == 0) {
printf("yes\n");
} else {
printf("no\n");
}
}
return 0;
}
