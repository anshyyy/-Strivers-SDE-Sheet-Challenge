#include <bits/stdc++.h> 
using namespace std;


//stl based solution tc O(n) , Sc-O(n)
vector<int> nextPermutationSTL(vector<int> &permutation, int n)
{
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}


/* 
   Implementing this by own 
   idea : use binary search for finding the next 
   the sequence sorted in descending order does not have next perm
   a) Traverse from the right and find the first item that is not following the ascending order. For example in “abedc”, the character ‘b’ does not follow the ascending order.
b) Swap the found character with the closest greater (or smallest greater) element on the right side of it. In the case of “abedc”, we have ‘c’ as the closest greater element. After swapping ‘b’ and ‘c’, the string becomes “acedb”.
c) After swapping, reverse the string after the position of the character found in step a. After reversing the substring “edb” of “acedb”, we get “acbde” which is the required next permutation. 
*/

void rev(string& s, int l, int r)
{
    while (l < r)
        swap(&s[l++], &s[r--]);
}
 
int bsearch(string& s, int l, int r, int key)
{
    int index = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (s[mid] <= key)
            r = mid - 1;
        else {
            l = mid + 1;
            if (index == -1 || s[index] >= s[mid])
                index = mid;
        }
    }
    return index;
}

bool nextpermutation(string& s)
{
    int len = s.length(), i = len - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        --i;
    if (i < 0)
        return false;
    else {
        int index = bsearch(s, i + 1, len - 1, s[i]);
        swap(&s[i], &s[index]);
        rev(s, i + 1, len - 1);
        return true;
    }
}

vector<int>nextPermutation(vector<int>permutation,int n){

}