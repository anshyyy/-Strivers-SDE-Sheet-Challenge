#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
        unordered_set<int>st;
        int i = 0,j=0;
        int ans = 0;
        while(j<s.size()){
            if(st.find(s[j])==st.end()){  // not seen 
                st.insert(s[j]);
                ans = max(ans,(int)st.size());
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
}