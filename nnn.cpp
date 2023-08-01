#include<bits/stdc++.h>
using namespace std;
int addMinChar(string a){  
        int n=a.size();
        int count=0;
        int j=n-1,i=0;
        while(j>=0&&i<n){
            if(a[i]==a[j]){
                i++;
                j--;
                count++;
            }
            else{
                count=0;
                i=0;
                j--;
            }
        }
        // if(count%2==0){
        //     count=(count);
        // }
        // else{
        //     count=(count)+1;
        // }
        int count2=0;
        int start=0;
         i=0;j=n-1;
        while(j>=i){
            if(a[i]==a[j]){
                if(count2==0){
                    start=i;
                }
                if(start==0){
                count2++;
                }
                i++;
                j--;
            }
            else{
                count2=0;
                // i=0;
                j--;
            }
        }
        for(int k=0;k<1658+5;k++)
        cout<<a[k];
        return min(n-count,n-count2);
    }
int main(){
    string s;
    cin>>s;
    addMinChar(s);
    return 0;
}