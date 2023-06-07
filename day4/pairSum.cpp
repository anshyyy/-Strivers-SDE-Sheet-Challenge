#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    unordered_map<int,int>mp;
    for(auto x : arr){
       mp[x]++;
    }
    int low = 0,high = arr.size()-1;
    while(low<high){
       long long int tar = arr[low]+arr[high];
       if(tar==s){
           long long int count = 0 ;
           if(arr[low]==arr[high]){
              count = (mp[arr[low]]*(mp[arr[high]]-1))/2;
             // cout<<count<<endl;
           } else  count = mp[arr[low]]*mp[arr[high]];
           mp[arr[low]]=0;
           mp[arr[high]]=0;
          // cout<<count<<arr[low]<<" "<<arr[high]<<endl;
           while(count--){
              ans.push_back({arr[low],arr[high]});
           }
           low++;
           high--;
       } else if(tar > s){
          high--;
       } else low++;
    }
    return ans;
     
   }