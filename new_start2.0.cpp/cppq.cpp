#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int x=0,y=0;
        int s=-1;
        int count=0;
        int max=0;
        int l=0,r=0;
        int a1=0,a2=0;
        for(int i=0;i<n-1;i++){
            if(b[i]!=a[i]){
                l=i;
                r=i;
               
                if(max<(r-l+1))
                {
                    max=r-l+1;
                    a1=l;
                    a2=r;
                }
            }
        }
        l=a1;
        r=a2;
         while(l>0&&b[l]>=b[l-1]){
                    l--;
                }
                while(r<n-1&&b[r]<=b[r+1]){
                    r++;
                }
                   a1=l;
                    a2=r;          cout<<a1+1<<" "<<a2+1<<endl;
    }
    return 0;
}