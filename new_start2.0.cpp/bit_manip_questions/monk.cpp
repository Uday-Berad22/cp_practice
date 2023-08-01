#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int test;
    cin>>test;
    while(test--){
    int n;
    cin>>n;
    cout<<(__builtin_popcountll(n))<<" "<<floor((log2(n)+1))<<endl;
    }
    return 0;
}