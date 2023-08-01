#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prime_factor;
    unordered_map<int,int> prime_factor_withcount;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            prime_factor.push_back(i);
            prime_factor_withcount[i]++;
            n/=i;
        }
    }
    if(n>1){
        prime_factor.push_back(n);
        prime_factor_withcount[n]++;
    }
    for(auto x: prime_factor)
    cout<<x<<" ";
    cout<<endl;
    for(auto a: prime_factor_withcount)
    cout<<a.first<<" "<<a.second<<endl;
    return 0;
}