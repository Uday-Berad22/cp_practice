#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
class Solution {
public:
    void gen(vector<int> &sub,int i,int n,vector<vector<int> > &v)
{
    if(i==n)
    {
        v.push_back(sub);
        return;
    }
    gen(sub,i+1,n,v);
    sub.push_back(i+1);
    gen(sub,i+1,n,v);
    sub.pop_back();
}
    int profitableSchemes(int N, int minProfit, vector<int>& g, vector<int>& p) {
        int n=p.size();
    vector<vector<int> > v;
    vector<int>sub;
     gen(sub,0,n,v);
       int count=0;
       int mem=0;
       for(int i=0;i<v.size();i++)
     {   
         int sum=0;
         mem=0;
        vector<int> temp=v[i];
        for(int j=0;j<temp.size();j++)
        {
            if(temp[j]!=0){
            sum+=p[temp[j]-1];
            mem+=g[temp[j]-1];
            // cout<<p[temp[j]];
            }
            // cout<<temp[j]<<endl;
        }
        if(sum>=minProfit&&mem<=N){
            count=(count+1)%M;
        }
    }
    return count;
    }
};
/*
 n = 5, minProfit = 3, group = [2,2], profit = [2,3]
 */
int main(){
    Solution obj;
    int n;
    cin>>n;
    int mp;
    cin>>mp;
    int N;
    cin>>N;
    vector<int> g(n),p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    cout<<obj.profitableSchemes(N,mp,g,p);
    return 0;
}

