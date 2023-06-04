#include <bits/stdc++.h>


// time complexity O(n*m) Space Complexity O(n)

void setZeros(vector<vector<int>> &matrix)
{
	 vector<pair<int,int>>zero;
	 for(int i=0;i<matrix.size();i++){
		 for(int j=0;j<matrix[0].size();j++){
			 if(matrix[i][j]==0){
				// cout<<i<<" "<<j<<endl;
				 zero.push_back({i,j});
			 }
		 }
	 }
     for(int i=0;i<zero.size();i++){
		 int pos_i = zero[i].first;
		 int pos_j = zero[i].second;

		 //left 
		 for(int k = pos_j;k>=0;k--){
			 if(matrix[pos_i][k]!=0){
				matrix[pos_i][k]=0;
			 }
		 }
		 //right
		 for(int k=pos_j;k<matrix[pos_i].size();k++){
			  if(matrix[pos_i][k]!=0){
				matrix[pos_i][k]=0;
			 }
		 }
		 //up
		 for(int k=pos_i;k>=0;k--){
              if(matrix[k][pos_j]!=0){
				  matrix[k][pos_j]=0;
			  }
		 }
		 //down
		 for(int k=pos_i;k<matrix.size();k++){
              if(matrix[k][pos_j]!=0){
				  matrix[k][pos_j]=0;
			  }
		 }
	 }

}