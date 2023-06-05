#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	vector<int>fre(n,0);
	for(auto x : arr){
		fre[x]++;
	}
	for(int i=0;i<fre.size();i++){
		//cout<<i<<" "<<fre[i]<<endl;
		if(fre[i]>1) return i;
	}
	return 0;
}
