#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long res = 0;
	    long long mask = 1;
	    for(int i=0;i<32;i++){
	        mask = (1 << i);
	        //cout<<mask<<" ";
	        int count = 0;
	        for(int j=0;j<n;j++){
	            if((arr[j] & mask) != 0){
	                count++;
	            }
	        }
	        if(count > 1){
	            res = (res ^ mask);
	        }
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
}
