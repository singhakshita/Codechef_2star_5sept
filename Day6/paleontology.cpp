#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k;
	    cin>>n>>k;
	    string str;
	    cin>>str;
	    unordered_set<char> hs;
	    for(int i=0;i<n;i++){
	        hs.insert(str[i]);
	    }
	    int len = hs.size();
	    cout<<max(0,k-len)<<endl;
	}
	return 0;
}
