#include <bits/stdc++.h> 


void solve(unordered_map<string,int>&dict,vector<string>&solutions,int level,string temp,const string &s){
     if(level>=s.size()){
         //cout<<level<<" "<<temp<<endl;
         solutions.push_back(temp);
         return;
     }
     string ans = "";
     for(int i=level;i<s.size();i++){
         ans += s[i];
         if(dict.find(ans)!=dict.end()){
                if(temp.size()==0){
                    solve(dict,solutions,i+1,temp+ans,s);
                } else{
                    solve(dict,solutions,i+1,temp+" "+ans,s);
                }
         }
     }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    unordered_map<string,int>dict;
    vector<string>solutions;
    for(auto d : dictionary){
        dict[d]++;
    }
    solve(dict,solutions,0,"",s);
    return solutions;


}