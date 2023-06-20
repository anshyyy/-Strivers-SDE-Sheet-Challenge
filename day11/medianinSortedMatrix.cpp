int findNum(vector<int>&arr,int mid){ //just a upper_bound
    int low = 0,high = arr.size()-1;
    while(low<=high){
        int md = low+(high-low)/2;
        if(arr[md]<=mid){
            low = md + 1;
        } else {
            high = md-1;
        }
    }
    return low;
}


int Solution::findMedian(vector<vector<int>> &A) {
    int n = A.size(),m=A[0].size();

    long long int low = 0,high = 1e9;
    while(low<=high){
         long long int mid = low + (high-low)/2;
         int cnt = 0;
         for(int i=0;i<n;i++){
             cnt += findNum(A[i],mid);
         }  
        // cout<<mid<<" "<<cnt<<endl;  
         if(cnt <= (n*m)/2) low = mid+1;
         else high = mid-1;
    }
    return low;
}
