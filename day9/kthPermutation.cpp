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


//another approach
string kthPermutation(int n, int k) {
    // Write your code here.
      // we have to calculate factorial for n-1 elemetns each time;
    int fact = 1;
    // in numbers array we will sotre and pick the numbers
    // if arr is [1, 2, 3, 4] --> 1 + [2, 3, 4] ]-> 6  (3! = 3*2)
    // if arr is [1, 2, 3, 4] --> 2 + [1, 3, 4] ]-> 6  (3! = 3*2)
    // if arr is [1, 2, 3, 4] --> 3 + [1, 2, 4] ]-> 6  (3! = 3*2)
    
    vector<int> numbers;
    for(int i = 1; i < n; i++){
        fact = fact * i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    // for 0 base indexing
    k = k-1;
    string ans = "";
    while(true){
        ans += to_string(numbers[k/fact]);
        // erasing the picked number
        numbers.erase(numbers.begin() + k/fact);

        if(numbers.size() == 0){
            break;
        }

        // re calculating k
        k = k % fact;
        fact = fact / numbers.size();
    }

    return ans;
}
