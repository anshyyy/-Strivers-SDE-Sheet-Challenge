#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end()); 
        vector<vector<int>>inter;
        vector<int>temp = intervals[0];
        for(auto i : intervals){
             if(temp[1]>=i[0]){
                 temp[1]=max(temp[1],i[1]);
             } else {
                 inter.push_back(temp);
                 temp = i;
             }
        }
        inter.push_back(temp);
        return inter;
}
