#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(abs(a[i]-(i+1)));
        }
        int ans=v[0];
        for(int i=0;i<v.size();i++){
            ans=__gcd(v[i],ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}