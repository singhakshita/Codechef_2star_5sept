#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k,f;
	    cin>>n>>k>>f;
	    int l, r;
	    vector<pair<int,int>> arr;
	    for(int i=0;i<n;i++){
	        cin>>l>>r;
	        arr.push_back({l,r});
	    }
	    sort(arr.begin(), arr.end());
	    int last = arr[0].second;
	    int count = arr[0].first;
	    for(int i=1;i<n;i++){
	        if(arr[i].first > last){
	            count += arr[i].first - last;
	        }
	        last = max(arr[i].second, last);
	    }
	    count += f - last;
	    if(count >= k){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
