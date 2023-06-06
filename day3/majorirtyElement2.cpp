#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int candidate1 = 0,candidate2 = 0;
    int count1=0,count2=0;
    int votes1 = 0,votes2=0;
    for(int i=0;i<arr.size();i++){
        if(candidate1 == arr[i]) votes1++;
        else if(candidate2 == arr[i]) votes2++;
        else if(votes1==0){
            candidate1 = arr[i];
            votes1=1;
        }
        else if(votes2==0){
            candidate2 = arr[i];
            votes2=1;
        } else {
            votes1--;
            votes2--;
        }
    }
    for(auto x : arr){
        if(x==candidate1)count1++;
        if(x==candidate2)count2++;
    }
   // cout<<candidate1<<" "<<candidate2<<endl;
    vector<int>ans;
    if(count1>arr.size()/3)ans.push_back(candidate1);
    if(count2>arr.size()/3)ans.push_back(candidate2);
    return ans;

}