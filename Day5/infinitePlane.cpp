#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    unordered_map<int,int> hm;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        hm[arr[i]]++;
	    }
	 
	    int res = 0;
	    for(auto i : hm){
	        res += min(i.second,i.first-1);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
