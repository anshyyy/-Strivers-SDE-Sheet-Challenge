#include <bits/stdc++.h>

int modular(int base,int n,int mod){
    long long int ans = 1;
    while(n>0){
        if(n%2) ans = (ans*base)%m;
        base = (base*base)%m
        n>>=1
    }
    return ans;
}