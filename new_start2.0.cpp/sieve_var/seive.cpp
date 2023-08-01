#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<bool> is_prime(N,true);
vector<int> highest_prime(N,0);
vector<int> lowest_prime(N,0);

int main(){
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<N;i++){
        if(is_prime[i]==true){
            highest_prime[i]=lowest_prime[i]=i;
            for(int j=2*i;j<N;j+=i){
                is_prime[j]=false;
                if(lowest_prime[j]==0){
                    lowest_prime[j]=i;
                }
                highest_prime[j]=i;
            }
        }
    }
    for(int i=2;i<10;i++){
        cout<<lowest_prime[i]<<" "<<highest_prime[i]<<endl;
    }

    return 0;
}