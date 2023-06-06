bool searchMatrix(vector<vector<int>>& mat, int target) {
        if(mat.size()==0) return false;
        int n=mat.size(),m=mat[0].size(); // treat it as sorted 1D array
        int low = 0, high = n*m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int e = mat[mid/m][mid%m];
            if(e==target) return true;
            else if(e>target) high = mid-1;
            else low = mid+1;

        }
        return false;
}