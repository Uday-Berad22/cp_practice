#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prime_fact;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            prime_fact.push_back(i);
            n/=i;
        }
    }
    for(auto a: prime_fact)
    cout<<a<<" ";
    return 0;
}