#include<bits/stdc++.h>
using namespace std;
#define int long long 
bool check(int &mid,int &k,vector<int> &v){
    int ice_stall=k;
    int last_pos=-1;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(ice_stall==0){
            return true;
        }
        if(last_pos==-1|| v[i]-last_pos>=mid){
        ice_stall--;
        last_pos=v[i];
        }
    }
    return ice_stall<=0;
}
signed main(){
    int n,k;
    cin>>n>>k;
    int low=-1;
    int high=1e9+10;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid,k,v)){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    cout<<low<<endl;
    return 0;
}