#include<bits/stdc++.h>
using namespace std;
int binary_s(vector<int> &v,int r,int x,int M){
    int count=0;
    int lastlamp=v[0];
    int last=0;
    for(int i=0;i<v.size();i++){
        count++;
        if(last+2*r>=M){
            break;
        }
        last=last+2*r;
    }
    int n=v.size();
    int ans=min(count,n);
    return ans ;
}
int main(){
//     int t;
//     cin>>t;
//    for(int z=0;z<t;z++){
//     long long m,r,n;
//     cin>>m>>r>>n;
//     vector<int> a;
    
//     for(int i=0;i<n;i++){
//     int x;cin>>x;
//     a.push_back(x);
//     }
//     if(a[0]>r){
//         cout<<"Case #"<<z+1<<": IMPOSSIBLE"<<endl;
//         continue;
//     }
//     int flag=0;
//     for(int i=1;i<n-1;i++){
//         if(a[i-1]+2*r<a[i]){
//             flag=1;
//             break;
//         }
//     }
//     if(a[n-1]+r<m){
//         flag=1;
//     }
//     // int flag=0;
//     if(flag==1){
//         cout<<"Case #"<<z+1<<": IMPOSSIBLE"<<endl;
//     }
//     else{
//         // int  low=0;
//         // int  high=n+1;
//         // while(high-low>1){
//         //     int   mid=(high+low)/2;
//         //     if(binary_s(a,r,mid,m)){
//         //         high=mid;
//         //     }
//         //     else{
//         //         low=mid;
//         //     }
//         // }
//             a.insert(a.begin(),0);

//         cout<<"Case #"<<z+1<<": "<<binary_s(a,r,0,m)<<endl;
//         // cout<<"Case #"<<z+1<<": NO"<<endl;
//     }
//     }
cout<<97*90<<endl;
    return 0;
}