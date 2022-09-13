#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<(arr[0]&arr[1])<<" ";
	    for(int i=1;i<n-1;i++){
	        cout<<max((arr[i]&arr[i+1]), (arr[i]&arr[i-1]))<<" ";
	    }
	    cout<<(arr[n-2]&arr[n-1])<<endl;
	    
	}
	return 0;
}
