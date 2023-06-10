#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
	 sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1,right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == K){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left] == nums[left+1]) left++;
                    while(left<right && nums[right] ==nums[right-1]) right--;
                    left++;
                    right--;
                } else if(sum > K) right--;
                else left++;
            }
        }
        return ans;
}