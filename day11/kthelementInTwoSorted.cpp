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

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    if(m>n){
       return ninjaAndLadoos(row2,row1,n,m,k);
   }
   int low = max(0,k-m);
   int high = min(k,n);

   while(low<=high){
       int mid = low + (high-low)/2;
       int cut2 = k-mid;

       int l1 = mid==0 ? INT_MIN : row1[mid-1];
       int r1 = mid==n ? INT_MAX : row1[mid];
       int l2 = cut2==0 ? INT_MIN : row2[cut2-1];
       int r2 = cut2==m ? INT_MAX : row2[cut2];

       if(l1<=r2 && l2<=r1){
           return max(l1,l2);
       } else if(l1>r2){
           high = mid-1;
       } else{
           low = mid+1;
       }
   }
   return -1;
}

void solve(){ 
     int n,m,k;
     cin>>n>>m>>k;
     vector<int>a(n),b(m);
    loop(i,0,n) cin>>a[i];
    loop(i,0,m) cin>>b[i];
    cout<<ninjaAndLadoos(a,b,n,m,k)<<endl;
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