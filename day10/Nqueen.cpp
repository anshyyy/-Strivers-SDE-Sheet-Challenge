#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>&board,int row,int col){
    int r = row-1;
    int c = col;
    while(r>=0){ //up
        if(board[r--][c]) return false;
    }
    r=row;
    c = col-1;
    while(c>=0){ // left
        if(board[r][c--]) return false;
    }
    r=row-1;
    c=col-1;
    while(r>=0 && c>=0){ //diagonal left
        if(board[r--][c--]) return false;
    }
    r=row-1;
    c=col+1;
    while(r>=0 && c<board[0].size()){ //diagonal right
       // cout<<r<<" "<<c<<" "<<board[r][c]<<endl;
        if(board[r--][c++]) return false;
    }
    return true;

}
vector<int> flattenMatrix(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> flattened;
    
    for (const auto& row : matrix) {
        flattened.insert(flattened.end(), row.begin(), row.end());
    }
    
    return flattened;
}
void NQueen(vector<vector<int>>&board,int row,int col,int total_queen,int queen_placed,vector<vector<int>>&solutions){
    if(queen_placed == total_queen){
        vector<int>t = flattenMatrix(board);
        solutions.push_back(t);
        return;
    }
    if(col == board[0].size()){
        row++;
        col = 0;
    }
    if(row == board.size()){
        return;
    }
    if(isSafe(board,row,col)){
       // cout<<"row:"<<row<<" "<<"col:"<<col<<endl;
        board[row][col]=1;
        NQueen(board,row,col+1,total_queen,queen_placed+1,solutions);
        board[row][col]=0;
    }
    NQueen(board,row,col+1,total_queen,queen_placed,solutions);
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<vector<int>>solutions;
    NQueen(board,0,0,n,0,solutions);
    return solutions;
}

int main(){
    
    int n;
    cin>>n;
    vector<vector<int>> ans = solveNQueens(n);
    for(auto r : ans){
        for(auto c : r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}