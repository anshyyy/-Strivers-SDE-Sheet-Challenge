/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


struct Meeting {
    int start;
    int end;
    int index;
};

static bool cmp(Meeting m1,Meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.index<m2.index) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    // Write your code here.
    vector<int>ans;
    ans.push_back(1);
    vector<Meeting>m();
    for(int i=0;i<s.size();i++){
        m[i].start = s[i];
        m[i].end = e[i];
        m[i].index = i+1;
    }
    sort(m.begin(),m.end(),cmp);
    int start = m[0].start,end = m[0].end;
    for(int i=1;i<s.size();i++){
        if(m[i].start>end){
            end = m[i].end;
            ans.push_back(m[i].index);
        }
    }
    return ans;

}

int main()
{
    vector<int> a = {1 ,3 ,0 ,5 ,8 ,5};
    vector<int> b = {
2 ,4 ,6 ,7 ,9 ,9};
    vector<int>an = maximumMeetings(a,b);
    for(auto x : an){
        cout<<x<<" ";
    }    
    cout<<endl;

    return 0;
}
