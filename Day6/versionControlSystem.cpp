#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k,m;
	    cin>>n>>k>>m;
	    unordered_set<int> ignored;
	    unordered_set<int> tracked;
	    int a;
	    for(int i=0;i<k;i++){
	        cin>>a;
	        ignored.insert(a);
	    }
	    for(int i=0;i<m;i++){
	        cin>>a;
	        tracked.insert(a);
	    }
	    int res1 = 0;
	    int res2= 0;
	    for(int i=1;i<=n;i++){
	        if(ignored.find(i) != ignored.end() && tracked.find(i) != tracked.end()){
	            res1++;
	        }
	        if(ignored.find(i) == ignored.end() && tracked.find(i) == tracked.end()){
	            res2++;
	        }
	    }
	    cout<<res1<<" "<<res2<<endl;
	}
	return 0;
}
