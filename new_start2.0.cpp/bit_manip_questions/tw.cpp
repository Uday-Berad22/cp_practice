class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        int sr=0;
        int er=n-1;
        int sc=0;
        int ec=m-1;
        vector<int> v;
        queue<int> q1,q2;
        int count=0;
        int i=0;
        while(count<n-1){
            q1.push(i);
            count++;
            if(count<n-1)
            q1.push(n-i-1);
            count++;
            i++;
        }
        count=0;
        i=0;
        while(count<m-1){
            q2.push(m-i-1);
            count++;
            if(count<m-1) 
            q2.push(i);
            count++;
            i++;
        }
        count=0;
        while(count<m*n){
             if(count==m*n) break;
            int x=q1.front();
            q1.pop();
            for(int i=0;i<m;i++){
                if(matrix[x][i]!=101){
                    v.push_back(matrix[x][i]);
                    matrix[x][i]=101;
                    count++;
                }
            }
            if(count==m*n) break;
            x=q2.front();
            q2.pop();
            for(int i=0;i<n;i++){
                if(matrix[i][x]!=101){
                    v.push_back(matrix[i][x]);
                    matrix[i][x]=101;
                    count++;
                }
            }
             if(count==m*n) break;
            x=q1.front();
            q1.pop();
            for(int i=m;i>=0;i--){
                if(matrix[x][i]!=101){
                    v.push_back(matrix[x][i]);
                    matrix[x][i]=101;
                    count++;
                }
            }
             if(count==m*n) break;
            x=q2.front();
            q2.pop();
            for(int i=n;i>=0;i--){
                if(matrix[i][x]!=101){
                   
                    v.push_back(matrix[i][x]);
                     matrix[i][x]=101;
                    count++;
                }
            }
             if(count==m*n) break;
        }
        return v;
    }
};