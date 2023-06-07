#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>num;
    for(int i : arr){
        num.insert(i);
    }
    int count = 0,ans=0;
    for(auto e : num){
          if(num.count(e-1)==0){
              count = 0;
              while(num.count(e)){
                  count++;
                  e++;
              }
              ans = max(ans,count);
          }
    }
    return ans;
}