#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4,m=5;
    int arr[n][m]={{1,0,1,0,0},
                    {1,0,1,1,1},
                    {1,1,1,1,1},
                    {1,0,0,1,0}};
    int dp[n+1][m]={0};
    for(int i=0;i<=n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(arr[i-1][j]!=0)
            dp[i][j]=dp[i-1][j]+arr[i-1][j];
        }
    }
    int mi=INT_MAX;
    int count=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            for(int k=j;k<m;k++){
            if(dp[i][k]==0){
                ans=max(ans,(mi*count));
                count=0;
                mi=INT_MAX;
            }
            else{
            count++;
            mi=min(mi,dp[i][k]);
            }
            }
            ans=max(ans,(mi*count));
            count=0;
            mi=INT_MAX;
        }
         
    }
    cout<<ans<<endl;
    return 0;
}