//spider boiler plate final  // 106  work address
#include<bits/stdc++.h>
using namespace std;
void facto();

#define loop(i, start, n) for (int i = start; i < n; i++)
#define ll long long 
#define pback push_back 
#define all(v) (v).begin(),(v).end()
#define Yes cout<<"Yes"<<endl; 
#define No cout<<"No"<<endl; 
#define yes cout<<"YES"<<endl; 
#define no cout<<"NO"<<endl; 
const ll M = 1e9 + 7;
const int N=1e5+10;
#define fastfun() ios_base::sync_with_stdio(false),cin.tie(NULL) 
/////////////////////////  INPUTS  & OUTPUT //////////////////////
#define in(var, type) type var; cin >> var
#define ina(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define inv(v,n) for(int i=0;i<n;i++){int x;cin>>x;v.push_back(x);}
#define vec vector<int> 
#define out(n) cout<<n<<endl;
#define outloopln(v) for(auto i:v)cout<<i<<endl;
#define outloop(v) for(auto i:v) cout<<i<<" ";
//////////////////////////////////////////////
/////////   functions //////////////////////////////////////////////
ll modi(ll x);
ll addi(ll x,ll y);
ll multi(ll x,ll y);
int binary_expo(int a,int b,int m);
#define sorta(a,n) sort(a,a+n);
#define sortv(v) sort(v.begin(),v.end());
#define setbitll __builtin_popcountll(n); 
#define setbit __builtin_popcount(n); 
//////////////////////////////// COMPARITOR  ///////

bool cmp(int a,int b){
    return a>b;
}
int fact[N+1];
void work();
// ...////////////////////     MAIN     /////////////////////////////////////

int main(){
fastfun(); 
long long test;
cin >> test;
// test = 1;
//facto();
while(test--){
 work();
}
return 0;
}

// ...////////////////////    MAIN     /////////////////////////////////////

void facto(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
}
ll modi(ll x){
return ((x%M)+M)%M;
}
ll addi(ll x,ll y){
return modi(modi(x)+modi(y));
}
ll multi(ll x,ll y){
return modi(modi(x)*modi(y));
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

/*
    set<int> s;

    unordered_set<int> s;

    map<int,int> m;

    unordered_map<int,int> m;

    stack<int> st;

    queue<int> q;

    *max_element(v.begin(),v.end()); 

    *min_element(v.begin(),v.end()); 

    long long sum= accumulate(v.begin(),v.end(),0);
*/
////***************************  WORK   ****************************//
//  ../////////////////////////////////////////////////////////////------------------


void work(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    long long  ne=0;
    for(int i=n-1;i>=0;i--){
        if(b[i]==-1){
            ne+=((i+1)*1LL*(i+2))/2;
        }
    }
    long long x=(n*1LL*(n+1))/2 - ne;
    cout<<abs(x-ne)<<endl;
}

////***************************     ****************************//