#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    vector<pair<string, string>> arr;
	    string fn,ln;
	    unordered_map<string, int> hm;
	    for(int i=0;i<n;i++){
	        cin>>fn>>ln;
	        arr.push_back({fn,ln});
	        hm[fn]++;
	    }
	    for(auto ele : arr){
	        auto it = hm.find(ele.first);
	        int count =it->second;
	        if(count == 1){
	            cout<<ele.first<<endl;
	        }
	        else{
	            cout<<ele.first<<" "<<ele.second<<endl;
	        }
	    }
	}
	return 0;
}
