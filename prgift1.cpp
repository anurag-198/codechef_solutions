#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    int t,n,i,k,ch, j;
    scanf("%d", &t);
    while(t--)
    {
    ch=0;
    scanf("%d%d", &n, &k);
    int a[n], e[n];
    for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
    if(a[i]%2==0)
    ch++;
    e[i]=ch;
    }
    bool ans=false;
    for(i = 0; i < n; i++)
    {
    for(j = i; j < n; j++)
    {
    int tp = e[j]-e[i];
    if(a[i]%2==0)
    tp++;
    if(tp == k)
    {
    ans=true;
    break;
    }
    }
    }
    if(ans)
    printf("YES\n");
    else
    printf("NO\n");
    }
    return 0;
    }
