#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a;
	string s;
	stack<pair<int,string>> data;
	stack<int> minSt;
	int minTillNow = INT_MAX;
	for(int i=0;i<n;i++){
	    cin>>a;
	    if(a==0){
	        cin>>s;
	    }
	    else if(a == -1){
	        int count = 0;
	        while(data.top().first > minSt.top()){
	            data.pop();
	            minSt.pop();
	            count++;
	        }
	        cout<<count<<" "<<data.top().second<<endl;
	        data.pop();
	        minSt.pop();
            
	    }
	    else{
	        cin>>s;
            data.push({a,s});
            minTillNow = minSt.size() == 0 ? a : min(a, minSt.top());
            minSt.push(minTillNow);
	    }
	}
	return 0;
}


