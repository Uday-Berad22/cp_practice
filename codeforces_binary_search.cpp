#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(k--){
        int x;
        cin>>x;
        int high=n;
        int low=-1;
        while(high-low>1){
            int mid=(low+high)/2;
            if(a[mid]<=x){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        if(high<=n&&a[high-1]==x){
            cout<<high<<endl;
        }
        else
        cout<<high+1<<endl;
    }
    return 0;
}