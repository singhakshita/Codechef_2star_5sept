#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    long long  n;
	    cin>>n;
	    int count = 0;
	    long long mask = 1;
	    while(n > 0){
	        //cout<<n<<" ";
	        if((mask & n) == 0)
	            count++;
	        n = (n >> 1);    
	        
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
