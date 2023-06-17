#include <bits/stdc++.h> 


bool isSafe(int node,int col[],vector<vector<int>>&mat,int n,int color){
    for(int k=0;k<n;k++){
        if(k!=node &&mat[k][node] &&col[k]==color)
            return false;
    }
    return true;
}


bool solve(int node,vector<vector<int>>&mat,int m,int col[],int n){
     if(node == n) return true;
     for(int i=1;i<=m;i++){
         if(isSafe(node,col,mat,n,i)){
             col[node]=i;
             if(solve(node+1,mat,m,col,n)) return true;
             col[node]=0;
         }
     }
     return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    
    int n= mat.size();
    int col[n] = {};
    return solve(0,mat,m,col,n)?"YES":"NO";
}