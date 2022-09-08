//this solution will give TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	priority_queue<long long> pq;
	long long arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    pq.push(arr[i]);
	}
	int maxOp = 0;
	int query[q];
	for(int i=0;i<q;i++){
	    cin>>query[i];
	    maxOp = max(maxOp, query[i]);
	}
	long long res[maxOp];
	int j=0;
	while(pq.size() > 0 && j < maxOp){
	    long long num = pq.top();
	    pq.pop();
	    res[j] = num;
	    j++;
	    if(num/2 > 0)pq.push(num/2);
	}
	for(int i=0;i<q;i++){
	    cout<<res[query[i]-1]<<endl;
	}
	
	return 0;
}
