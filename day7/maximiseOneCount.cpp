int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
        int i=0,j=-1;
        int ans = 0,count=0;
        for(i=0;i<n;i++){
            if(arr[i]==0) count++;
            while(count>k){
                j++;
                if(arr[j]==0)count--;
            }
            ans = max(ans,i-j);
        }
        return ans;
}
