#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> m;
        int mi=INT_MIN;
        int s=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(mi<x){ 
                mi=x;
            }
            m[x]++;sum+=x;
        }
        for(auto a: m){
            if(a.first>s&&a.first!=mi){
                s=a.first;
            }
        }
        if(sum==0) {
            cout<<0<<endl; continue;
        }
        if(n==1) {
            cout<<-1<<endl;
            continue;
        }
        if(m[mi]==n) {
            cout<<-1<<endl;
            continue;
        }
        cout<<n-m[s]<<endl;
    }
    return 0;
}