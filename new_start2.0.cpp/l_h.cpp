#include<bits/stdc++.h>
using namespace std;
#define forlo(i, start, n) for (int i = start; i < n; i++)
#define print(v) for(auto i:v)cout<<i<<sp;cout<<endl;
#define ll long long 
#define pback push_back 
#define all(v) (v).begin(),(v).end()
#define Yes cout<<"Yes"<<endl; 
#define No cout<<"No"<<endl; 
#define input(var, type) type var; cin >> var
const ll M = 1e9 + 7;
const int N=1e5+10;
#define fastfun() ios_base::sync_with_stdio(false),cin.tie(NULL) 
#define sp ' ' 
#define sorta(a,n) sort(a,a+n);
#define sortv(v) sort(v.begin(),v.end());
ll modi(ll x){
return ((x%M)+M)%M;
}
ll addi(ll x,ll y){
return modi(modi(x)+modi(y));
}
ll multi(ll x,ll y){
return modi(modi(x)*modi(y));
}

bool cmp(){

}

int binary_expo(int a,int b,int m){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b=b>>1;
    }
    return ans;
}
int fact[N+1];
void facto(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
}





//  ../////////////////////////////////////////////////////////////------------------

// const int N=1e5+1;
void work(){
    int n;
    cin>>n;
    
    vector<int> v;
	int size=2*N;
    int is_dev[size]={0};
	for(int i=0;i<=size;i++){
		is_dev[i]=0;
	}
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        m[v[i]]++;
    }
    for(int i=1;i<=size;i++){
        for(int j=i;j<=size;j=j+i){
            if(m[j]!=0){
                is_dev[i]+=m[j];
            }
        }
    }
    int t;
    cin>>t;
    // cout<<"HELLO"<<endl;
    while(t--){
        int p,q;
        cin>>p>>q;
        // cout<<"AKO"<<endl;
        // int x=(p*1LL*q)/__gcd(p,q);
        int x=__gcd(p,q);
        long long  y=(p*1LL*q)/x;
        // cout<<y<<endl;
        if(y<size){
            long long ans=is_dev[p]+is_dev[q]-is_dev[y];
            cout<<ans<<endl;
        }
        else{
          long long ans=  is_dev[p]+is_dev[q];
        cout<<ans<<endl;
        }
        // cout<<"HELLO"<<endl;
    }
    
}


// ...////////////////////     MAIN     /////////////////////////////////////



int main(){
fastfun(); 
long long test;
// cin >> test;
test = 1;
//facto();
while(test--){
 work();
}
return 0;
}

// ...////////////////////    MAIN     /////////////////////////////////////

/*
    for(int i=0;i<n;i++){

    }
    for(auto a: v){

    }
    while(q--){

    }
    set<int> s;

    unordered_set<int> s;

    map<int,int> m;

    unordered_map<int,int> m;

    stack<int> st;

    queue<int> q;

    __builtin_popcount(n);  // int

    __builtin_popcountll(n); // long long

    *max_element(v.begin(),v.end()); 

    *min_element(v.begin(),v.end()); 
*/