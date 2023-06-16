class Solution {
public:
    void solve(vector<string>&perm,string &s,int level){
        if(s.size()-1==level){
            perm.push_back(s);
            return;
        }
        for(int i=level;i<s.size();i++){
            swap(s[i],s[level]);
            solve(perm,s,level+1);
            swap(s[i],s[level]);
        }
    }
    string getPermutation(int n, int k) {
        string s = "";
        for(int i=1;i<n+1;i++){
            s+=char(i+'0');
        }
        vector<string>perm;
        solve(perm,s,0);
        sort(perm.begin(),perm.end());
        // for(auto s : perm){
        //     cout<<s<<endl;
        // }
        return perm[k-1];
    }
};