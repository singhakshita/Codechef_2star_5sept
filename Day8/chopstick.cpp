#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr, arr+n);
	int i=0;
	int j = 1;
	int res = 0;
	while(j<n){
	    //cout<<i<<" "<<j<<endl;
	    if(arr[j] - arr[i] <= d){
	        res++;
	        i = j + 1;
	        j+=2;;
	    }else{
	        i = j;
	        j++;
	    }
	}
	cout<<res<<endl;
	return 0;
}
