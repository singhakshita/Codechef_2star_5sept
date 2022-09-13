#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    long long arr[n];
	    long long x = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        x = (x | arr[i]);
	    }
	   
	    long long ans = 0;
	    for(int i=0;i<n;i++){
	        ans = (ans | (arr[i] ^ x));
	    }
	    cout<<x<<" "<<ans<<endl;
	    
	}
	return 0;
}
