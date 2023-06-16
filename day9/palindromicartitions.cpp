class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>res;
        rec(0,res,s,temp);
        return res;
    }
private:
    void rec(int index,vector<vector<string>>&res,string s,vector<string>&temp){
        if(index==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                rec(i+1,res,s,temp);
                temp.pop_back();
            }
        }
    }
    bool isPalindrome(string s,int start ,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};