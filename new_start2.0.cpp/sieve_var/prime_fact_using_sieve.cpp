#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> hp(N,0);
vector<bool> is_prime(N,true);
vector<int> prime_fact;
int main(){
    // O(N*log(log(N)))
    for(int i=2;i<N;i++){
        if(is_prime[i]==true){
            hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                hp[j]=i;
                is_prime[j]=false;
            }
        }
    }
    int n;
    cin>>n;
    //O(logn) 
    while(n>1){
        int prime_factor=hp[n];
        {
            while(n%prime_factor==0){
                prime_fact.push_back(prime_factor);
                n/=prime_factor;
            }
        }
    }
    //

    for(auto x: prime_fact){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<2*3*5*7*11*13*17*19<<endl;
    return 0;
}