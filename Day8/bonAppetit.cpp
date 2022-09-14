#include <bits/stdc++.h>
using namespace std;

static bool customComp(pair<int,int>a, pair<int,int> b){
    return a.second<b.second;
}
int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k;
	    cin>>n>>k;
	    
	    unordered_map<int,vector<pair<int,int>>> hm;
	    int a,b,c;
	    for(int i=0;i<n;i++){
	        cin>>a>>b>>c;
	        hm[c].push_back({a,b});
	    }
	    int ans = 0;
	    for(auto temp : hm){
	        int res = 1;
	        vector<pair<int, int>> arr = temp.second;
	        sort(arr.begin(), arr.end(), customComp);
	        int end = arr[0].second;
	        for(auto data : arr){
	            if(data.first >= end ){
	                res++;
	                end = data.second;
	            }
	        }
	        ans += res;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
