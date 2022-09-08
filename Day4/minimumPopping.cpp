#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,m;
	    cin>>n>>m;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin>>arr[i];
	    }
	    int j = 0;
	    
	    unordered_map<int,int> hm;
	    while(hm.size() <n){
	        hm[arr[j]]++;
	        j++;
	    }
	    int res = j;
	    j--;
	    
	    int k = m;
	    while(j>=0 && j < k){
	       if(hm.size() == n) {
	           auto it = hm.find(arr[j]);
    	       int val = it->second;
    	       if(val == 1)
    	           hm.erase(arr[j]);
                else 
                    hm[arr[j]]--;
                j--;    
	       }else{
	           k--;
	           hm[arr[k]]++;
	           
	       }
	       if(hm.size() == n){
	           res = min(j +1 + m - k,res);
	       }
	       
	    }
	    cout<<res<<endl;  
	}
	return 0;
}
