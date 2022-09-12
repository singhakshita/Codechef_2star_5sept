#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,z;
	    cin>>n>>z;
	    int a;
	    priority_queue<int> pq;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        pq.push(a);
	    }
	    bool found = false;
	    long long count = 0;
	    while(pq.size() > 0){
	        int maxNum = pq.top();
	        count++;
	        pq.pop();
	        z -= maxNum;
	        if(z <=0 ){
	            found = true;
	            break;
	        }
	        if(maxNum/2 > 0)
	            pq.push(maxNum/2);
	    }
	    if(found) cout<<count<<endl;
	    else cout<<"Evacuate"<<endl;
	    
	}
	return 0;
}
