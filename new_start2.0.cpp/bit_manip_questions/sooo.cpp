#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
#define int long long 
vector<vector<int> > mat_mul(vector<vector<int> >m1,vector<vector<int> > m2)
{
    vector<vector<int> >m3{{0,0},{0,0}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int sum=0;
            for(int k=0;k<2;k++)
            {
                sum=((m1[i][k]*m2[k][j])%M+sum)%M;
            }
            m3[i][j]=sum%M;
        }
    }
    return m3;
}
vector<vector<int>> mat_opti(vector<vector<int>> mat,int n)
{
    if(n==1) return mat;
    vector<vector<int>>  temp=mat_opti(mat,n/2);
    if(n%2==0) return mat_mul(temp,temp);
    else return mat_mul(mat_mul(temp,temp),mat);
}
int fib(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    vector<vector<int>> v=mat_opti({{1,1},{1,0}},n-1);
    return v[0][0]%M;
}
signed main()
{
    long long  n;
    cin>>n;
    cout<<fib(n+1)<<endl;
    return 0;
}
