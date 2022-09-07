#include <bits/stdc++.h>
using namespace std;

int main() {
	    int n,m;
	    cin>>n>>m;
	    int arr1[n];
	    int arr2[m];
	    vector<pair<int, int>> v1;
	    vector<pair<int, int>> v2;
	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	        v1.push_back({arr1[i],i});
	    }
	    for(int i=0;i<m;i++){
	        cin>>arr2[i];
	        v2.push_back({arr2[i],i});
	    }
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(), v2.end());
	    int max2 = v2[m-1].second;
	    for(int i=1;i<n;i++){
	        cout<<v1[i].second<<" "<<max2<<endl;
	    }
	    int min1 = v1[0].second;
	    for(int i=0;i<m;i++){
	        cout<<min1<<" "<<v2[i].second<<endl;
	    }
	return 0;
}
