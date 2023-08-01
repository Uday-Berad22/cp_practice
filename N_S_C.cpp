#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n),a;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int i=0;
    while(i<n-1){
        if(v[i+1].first<v[i].second){
            v[i+1].first=min(v[i].first,v[i+1].first);
            v[i+1].second=max(v[i].second,v[i+1].second);
        }
        else{
            a.push_back(v[i]);
        }
        i=i+1;
    }
    a.push_back(v[i]);
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans+=abs(a[i].second-a[i].first);
    }
    cout<<ans<<endl;
    return 0;
}