#include <bits/stdc++.h> 



long long maxSubarraySum(int arr[], int n)
{

    long long int ans= 0;
    long long int temp = 0;

    for(int i=0;i<n;i++){
       temp += arr[i];
       ans = max(ans,temp);
       temp = max(temp,0LL);
    //    if(temp>ans){
    //        ans = temp;
    //    }
    //    if(temp<0){
    //        temp=0;
    //    }
    }
    return ans;
}