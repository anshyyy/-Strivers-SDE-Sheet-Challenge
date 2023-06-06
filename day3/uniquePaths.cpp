class Solution {
public:
    int dp[101][101] = {};
    int dfs(int m,int n,int x,int y){
        if(x>=m || y>=n) return 0;
        if(x==m-1 && y==n-1){
            return 1;
        }
        if(dp[x][y]) return dp[x][y];
        return dp[x][y]=dfs(m,n,x+1,y)+dfs(m,n,x,y+1);
    }
    int uniquePaths(int m, int n) {
       return dfs(m,n,0,0);
    }
};