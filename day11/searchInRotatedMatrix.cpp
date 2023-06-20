int search(int* nums, int n, int target) {
    // Write your code here.
     int low = 0;
        int high = n-1;
        while(low<high){
             int mid = (low+high)/2;
             if(nums[mid]>nums[high]) low = mid+1;
             else high = mid;
        }
        
        int rot = low;
       // cout<<rot<<endl;
        low = 0,high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int realmid = (mid+rot)%n;
            if(nums[realmid]==target) return realmid;
            if(nums[realmid]<target) low = mid+1;
            else high = mid-1;
        }
       return -1;
}