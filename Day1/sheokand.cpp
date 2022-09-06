#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	   Long n;
	   cin>>n;
	   vector<Long> arr;
	   for(int i=0;i<31;i++){
	       for(int j=i+1;j<31;j++){
	           Long temp = (1<<i) + (1<<j);
	           arr.push_back(temp);
	       }
	   }
	   Long minDif = INT_MAX;
	   
	   for(int i=0;i<arr.size();i++){
	       if(abs(arr[i] - n) < minDif){
	           minDif = abs(arr[i] - n);
	       }
	       cout<<arr[i]<<" ";
	   }
	   cout<<minDif<<endl;
	   
	    
	}
	return 0;
}
