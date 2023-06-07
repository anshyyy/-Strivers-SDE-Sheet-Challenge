#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    bool flag = false;
    for(int i=0;i<arr.size()-2;i++){
        for(int j=i+1;j<arr.size()-1;j++){
             int low = j+1;
             int high = arr.size()-1;
             while(low<high){
                // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[low]<<" "<<arr[high]<<endl;
                 long long int sum = arr[i]+arr[j]+arr[low]+arr[high];
                 if(sum == target){
                     return "Yes";
                 } else if(sum>target) high--;
                 else low++;
             }
        }
    }
    return "No";
}
