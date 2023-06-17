#include <bits/stdc++.h> 


void solve(vector<string>&p,int level,string &s){
    if(level == s.size()-1){
        p.push_back(s);
        return;
    }
    for(int i=level;i<s.size();i++){
        swap(s[i],s[level]);
        solve(p,level+1,s);
        swap(s[i],s[level]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>p;
    solve(p,0,s);
    return p;
}