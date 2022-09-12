#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    long long n,w,wr;
	    cin>>n>>w>>wr;
	    long long arr[n];
	    unordered_map<long long, long long> hm;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        hm[arr[i]]++;
	    }
	    long long total= 0;
	    for(auto ele : hm){
	        long long wi = ele.first;
	        long long count = ele.second/2;
	        total += wi * count * 2;
	    }
	    total += wr;
	    if(total >= w){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
