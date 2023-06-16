#include <bits/stdc++.h>
void solve(vector<vector<int>>&combinations,int target,int level,vector<int>&nums,vector<int>temp){
	if(target<0) return;
	if(target==0){
		combinations.push_back(temp);
		return;
	}
	for(int i=level;i<nums.size();i++){
		if(i>level && nums[i-1]==nums[i]) continue;
		temp.push_back(nums[i]);
		solve(combinations,target-nums[i],i+1,nums,temp);
		temp.pop_back();
	}
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	sort(arr.begin(),arr.end());
	vector<vector<int>>combinations;
	solve(combinations,target,0,arr,{});
	return combinations;
}
