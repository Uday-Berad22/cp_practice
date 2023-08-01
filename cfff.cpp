#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,c,d;
        cin>>n>>c>>d;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        long long  cost=0;
        sort(v.begin(),v.end());
        if(v[0]!=1){
            v.insert(v.begin(),1);
            cost+=d;
        }
        int i=0;
        long long  m=1e18;
        n=v.size();
        for(int j=1;j<n;j++){
           
            if(v[j]-v[i]>1){
                long long   temp=cost+d*1LL*(v[j]-v[i]-1);
                m=min(m,((n-j)*1LL*c+cost));
                cost=temp;
                i=j;
            }
            else if(v[j]-v[i]==0){
                i=j;
                cost+=c;
            }
            else{
                i++;
            }
        }
        cout<<min(m,cost)<<endl;
 }
    return 0;
}