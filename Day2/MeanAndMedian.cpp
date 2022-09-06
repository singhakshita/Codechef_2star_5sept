#include <bits/stdc++.h>
using namespace std;
long long setMid(long long  med, long long n , long long arr[], int idx, long long prev){
    if(arr[idx] > med)
        return -1;
    long long median = 0;
    for(int i= idx ;i<n;i++){
        if(arr[i] <med){
            median = median + (med - arr[i]);
        }
        else 
            break;
    }
    long long mean = (n*med) - prev;
    if(mean >= median)
        return mean;
    return -1;    
}
int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    long long sum = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    sort(arr, arr+n);
	    int idx = n%2 == 0 ? n/2 : (n+1)/2;
	    idx--;
	    long long lo = 0;
	    long long hi = 1000000000;

	    long long ans = -1;
	    while(lo <= hi){
	        long long mid = lo + ( hi - lo )/2;
	        long long can = setMid(mid,n,arr,idx,sum);
	        if(can >=0 ){
	            ans = can;
	            hi = mid - 1;
	        }
	        else{
	            lo = mid + 1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
