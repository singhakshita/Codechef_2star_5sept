#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,q;
	    cin>>n>>q;
	    long long A[n];
	    long long B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    int query[q];
	    for(int i=0;i<q;i++){
	        cin>>query[i];
	    }
	    sort(A,A+n);
	    sort(B,B+n);
	    priority_queue<long long> pq;
	    int len = min(n,1000);
	    for(int i=0;i<len;i++){
	        for(int j=0;j<len;j++){
	            pq.push(A[i]+B[j]);
	            if(pq.size() > 10000){
	                pq.pop();
	            }
	        }
	    }
	    vector<long long> res;
	    while(pq.size() > 0){
	        long long temp = pq.top();
	        res.push_back(temp);
	        //cout<<temp<<" ";
	        pq.pop();
	    }
	    //cout<<endl;
	    int m = res.size();
	    for(int i=0;i<q;i++){
	        cout<<res[m-query[i]]<<endl;
	    }
	    
	}
	return 0;
}
