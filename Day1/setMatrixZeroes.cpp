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



//to optimise it more futher we can make the first row and first column as flag variable i.e if we have encountered 0 at 2,1 then we will set the first row element of 2 to 0 and same for column


 void setZeroes(vector<vector<int>> &matrix)
{
	bool isCol = false;
	for(int i=0;i<matrix.size();i++){
		   if(matrix[i][0]==0){
				 isCol = true;
			 }
			 for(int j=1;j<matrix[0].size();j++){
				 if(matrix[i][j]==0){
					 matrix[i][0]=0;
					 matrix[0][j]=0;
				 }
			 }
	}

	for(int i=1;i<matrix.size();i++){
		for(int j=1;j<matrix[0].size();j++){
			if(matrix[i][0]==0 || matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	}
	if(matrix[0][0]==0){ //checking first row 
		for(int j=0;j<matrix[0].size();j++){
			matrix[0][j]=0;
		}
	}
	if(isCol){ //checking first column
		for(int i=0;i<matrix.size();i++){
			matrix[i][0]=0;
		}
	}

}