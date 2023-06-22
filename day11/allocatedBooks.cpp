#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}

bool isPossible(vector<int>&A,int B,int mid){
    int student = 1;
    int sumAllocated = 0;
    for(int i=0;i<A.size();i++){
        sumAllocated += A[i];
        if(sumAllocated > mid){
            sumAllocated = A[i];
            student++;
            if(student>B) return false;
        }
    }
    return true;
}


int books(vector<int> &A, int B) {
    int low = *max_element(A.begin(),A.end());
    int high = accumulate(A.begin(),A.end(),0);
    while(low<=high){
        int mid = low + (high-low)/2;
        if(isPossible(A,B,mid)){
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return low;
}


void solve(){ 
     int n,b;
     cin>>n>>b;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     cout<<books(arr,b);
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}