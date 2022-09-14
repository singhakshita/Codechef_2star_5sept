#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long long sum = 0;
	    for(int i=0;i<n;i++){
	        if(i<k && arr[i] < 0){
	            arr[i] = arr[i] * -1;
	        }
	         if(arr[i] > 0){
	             sum += arr[i];
	         }   
	        
	    }
	    cout<<sum<<endl;
	   
	}
	return 0;
}
