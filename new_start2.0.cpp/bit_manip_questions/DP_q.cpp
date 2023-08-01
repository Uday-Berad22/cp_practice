#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
int main(){
    cpp_int n;cin>>n;
    
        cpp_int   dp[n+1]={0};
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<i/2;j++){
                dp[i]=2*dp[j]*dp[i-1-j]+dp[i];
            }
            if(i%2!=0){
                dp[i]=dp[(i/2)]*dp[(i/2)]+dp[i];
            }
        }
        // return dp[n];
    cout<<dp[n]<<endl;
    return 0;

}