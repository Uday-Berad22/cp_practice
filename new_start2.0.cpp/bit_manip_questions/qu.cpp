#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%2!=0){
            cout<<-1<<endl;
            continue;
        }
        vector<int> v;
        int i=1,j=n;
        while(i<n&&j>1){
            v.push_back(j);
            v.push_back(i);
            j-=2;
            i+=2;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}