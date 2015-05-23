#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    string str;
    cin>>str;
    int tc;
    cin>>tc;
    while(tc--){
        char a1,b1;
        long long int si,ei;
        cin>>a1>>b1>>si>>ei;
        si = si-1;;
        ei = ei-1;
        long long int count1 = 0;
        long long int total_count = 0;
        long long int i;
        for(i = si; i <= ei; i++){
            if(str[i] == a1){
                count1++;
            }
            else if(str[i] == b1){
                total_count = total_count + count1;
            }
        }
        cout<<total_count<<"\n";
    }
    return 0;
}
