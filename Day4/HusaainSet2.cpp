#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	long long arr[n];
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int maxOp = 0;
	int query[q];
	for(int i=0;i<q;i++){
	    cin>>query[i];
	    maxOp = max(maxOp, query[i]);
	}
	
	long long res[maxOp];
	sort(arr, arr+n);
	queue<long long> q1;
	queue<long long> q2;
	for(int i=n-1;i>=0;i--){
	    q1.push(arr[i]);
	}
	int j = 0;
	while(q1.size() > 0 && j<maxOp){
	    long long x = q1.front();
	    long long y = q2.size() == 0 ? INT_MIN : q2.front();
	    if(x>= y){
	        //cout<<x<<" ";
	        q1.pop();
	        res[j] = x;
	        j++;
	        if(x/2 > 0)q2.push(x/2);
	    }
	    else{
	        //cout<<y<<" ";
	        q2.pop();
	        res[j] = y;
	        j++;
	        if(y/2 > 0) q2.push(y/2);
	    }
	}
	while(j<maxOp && q2.size() > 0){
	    int num = q2.front();
	    q2.pop();
	    //cout<<num<<" ";
	    res[j] = num;
	    j++;
	    if(num/2 > 0)
	        q2.push(num/2);
	}
	
	//cout<<endl;
	for(int i=0;i<q;i++){
	    cout<<res[query[i]-1]<<endl;
	}
	
	return 0;
}
