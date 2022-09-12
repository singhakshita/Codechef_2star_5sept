#include <bits/stdc++.h>
using namespace std;
bool check(vector<pair<int,int>> &arr, int n, int m, int mid){
    int currLocation = 1;
    multiset<int> s;
    int i=0;
    while(currLocation < n){
        while( i< m && arr[i].first <= currLocation ){
            s.insert(arr[i].second);
            i++;
        }
        int curr = currLocation;
        while(curr == currLocation && !s.empty()){
            int R = *s.begin();
            s.erase(s.begin());
            currLocation = max(currLocation,min(R, currLocation+mid));
        }
        if(currLocation == curr){
            break;
        }
    }
    return currLocation == n;
}
int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,m;
	    cin>>n>>m;
	    int range[m][2];
	    vector<pair<int,int>> arr;
	    for(int i=0;i<m;i++){
	        cin>>range[i][0]>>range[i][1];
	        arr.push_back({range[i][0], range[i][1]});
	    }
	    sort(arr.begin(), arr.end());
	    int lo = 0;
	    int hi = 1000000000;
	    int ans = -1;
	    while( lo <= hi){
	        int mid = lo + (hi - lo)/2;
	        bool isPossible = check(arr,n,m,mid);
	        if(isPossible){
	            ans = mid;
	            hi = mid - 1;
	        }
	        else{
	            lo = mid + 1;
	        }
	        
	    }
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
