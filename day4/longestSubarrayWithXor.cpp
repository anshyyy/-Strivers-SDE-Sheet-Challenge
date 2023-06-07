#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>mp;
    mp[0]=1;
    int count = 0;
    int xorr = 0;
    for(int i=0;i<arr.size();i++){
        xorr ^= arr[i];
        if(mp.find(xorr^x)==mp.end()){
            mp[xorr]++;
        } else {
            count += mp[xorr^x];
            mp[xorr]++;
        }
    }
    return count;
}