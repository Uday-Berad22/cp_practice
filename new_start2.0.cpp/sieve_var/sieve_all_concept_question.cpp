#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
vector<int> hp(N,0);
int canremove[N]={0};
int Hash[N]={0};

vector<int> find_dist(int x){
    vector<int> distinct_prime;
    while(x>1){
        int prime_f=hp[x];
        while(x%prime_f==0){
            x/=prime_f;
        }
        distinct_prime.push_back(prime_f);
    }
    return distinct_prime;
}
void calculate_hp(){
    for(int i=2;i<N;i++){
        if(hp[i]==0){
            for(int j=i;j<N;j+=i){
                hp[j]=i;
            }
        }
    }
}
void makepow(){
    for(int i=2;i<N;i++){
        if(Hash[i]==1){
            for(long long  j=i;j<N;j=j*i){
                canremove[j]=1;
            }
        }
    }
}
int main(){
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Hash[x]=1;
    }
    calculate_hp();
    makepow();
    while(q--){
        int x;
        cin>>x;
        bool flag=false;
        vector<int> distinct_prime=find_dist(x);
        for(int i=0;i<distinct_prime.size();i++){
            for(int j=i;j<distinct_prime.size();j++){
                if(i==j && x%(distinct_prime[i]*distinct_prime[j])!=0){
                    continue;
                }
                int toremov=x/(distinct_prime[i]*distinct_prime[j]);
                if(canremove[toremov]==1||toremov==1){
                    flag=true;
                    break;
                }
            }
            if(flag==true) break;
        }
    
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}