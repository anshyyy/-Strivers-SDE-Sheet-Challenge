
long long int power(long long int base,long long int exp){
  long long int ans = 1;
  while(exp>0){
    if(exp%2) ans = ans * base;
    base = base * base;
    exp>>=1;
  }
  return ans;
}

int NthRoot(int n, int m) {
    long long int low = 1;
    long long int high = m;
    while(low<=high){
        long long int mid = low + (high-low)/2;
        double val = pow(mid,n);
      //  cout<<low<<" "<<high<<" "<<mid<<" "<<val<<endl;
        if(pow(mid,n) == m){
             return mid;
        } else if(pow(mid,n) > m){
          high = mid-1;
        } else {
          low = mid+1;
        }
    }
    return -1;
}