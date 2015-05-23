#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
long long int arr[100001];
int main(){
    int t;
    cin>>t;
    int j;
    arr[0] = 1;
    for(j = 1; j < 100001; j++){
        arr[j] = (arr[j-1] << 1) % m;
    }
    while(t--){
        int n;
        cin>>n;
        int i;
        long long int a[n];
        for(i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long int sum = 0;
        long long int x;
        for(i = n-1; i >= 0; i--){
    	//	cout << sum <<" "<<arr[i] <<" "<<a[i] - a[n - 1 -i]<<endl;
	        sum = (sum + (arr[i] * (a[i] - a[n-1-i])) % m) % m;
        }
        if(sum < 0){
            sum = m + sum;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
