#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int x=log2(n)+1;
    
    cout<<(n|((1<<x)-1))<<endl;
    return 0;
}