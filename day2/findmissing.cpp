#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int>fre(n+1,0);
	for(int x : arr){
		fre[x]++;
	}
    int rep = -1;
	int miss = -1;
	for(int i=1;i<fre.size();i++){
		if(fre[i]==0){
          miss = i;
		}
		if(fre[i]>1) {
			rep = i;
		}
	}
    return {miss,rep};
	
}
