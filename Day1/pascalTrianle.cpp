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
#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
     vector<vector<long long int>>ans;
     vector<vector<long long int>>temp(n,vector<long long int>(n,0));
     for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
         if(i==j || j==0){
           temp[i][j]=1;
         } else{
           temp[i][j] = temp[i-1][j-1]+temp[i-1][j];
         }
         cout<<temp[i][j]<<" ";
       }
       cout<<endl;
     }
    //  for(int i=0;i<n;i++){
    //    for(int j=0;j<n;j++){
    //      cout<<temp[i][j]<<" ";
    //     //  if(temp[i][j]!=0){
    //     //    ans[i].push_back(temp[i][j]);
    //     //  }
    //    }
    //    cout<<endl;
    //  }
     return ans;
}



void solve(){ 
  int n;cin>>n;
   vector<vector<long long int>>ans = printPascal(n);
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