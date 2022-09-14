#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int last = -1;
	    int ans = 0;
	    for(int x=0;x<n;x++){
	        if(s[x] == '0')
	            continue;
	        if(last == -1){
	            last = x + 1;
	            ans++;
	            continue;
	        } 
	        if(x-last < k){
	            last = x+1;
	        }
	        else if(x-last == k){
	            last = x;
	        }
	        else if(x-last == k+1){
	            last = x-1;
	        }
	        else if(x-last > k+1){
	            last = x+1;
	            ans++;
	        }
	        
	        
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
