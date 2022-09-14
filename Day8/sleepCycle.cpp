#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,d;
	    cin>>n>>d;
	    string s;
	    cin>>s;
	    int count = 0;
	    bool found = false;
	    s = s+'1';
	    
	    for(int i=0;i<=n;i++){
	        if(s[i]=='0'){
	            count++;
	        }
	        else{
	            int left = d - count;
	            if(left <= 0){
	                cout<<"YES"<<endl;
	                found = true;
	                break;
	            }
	            if(2*left < d)d = 2*(left);
	            count = 0;
	        }
	    }
	    if(!found) cout<<"NO"<<endl;
	}
	return 0;
}
