#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    long long n,m,k;
	    cin>>n>>m>>k;
	    long long arr[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    long long prefix[n][m];
	    prefix[0][0] = arr[0][0];
	    for(int j=1;j<m;j++){
	        prefix[0][j] = prefix[0][j-1] + arr[0][j];
	    }
	    for(int i=1;i<n;i++){
	        prefix[i][0] = prefix[i-1][0] + arr[i][0];
	    }
	    for(int i=1;i<n;i++){
	        for(int j=1;j<m;j++){
	            prefix[i][j] = prefix[i][j-1] + prefix[i-1][j] - prefix[i-1][j-1] + arr[i][j];
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     for(int j=0;j<m;j++){
	   //         cout<<prefix[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
	    long long res = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            long long length  =min(n-i,m-j);
	            long long lo = 0;
	            long long hi = length-1;
	            
	            long long maxD = -1;
	            while( lo <= hi){
	                long long mid = lo + (hi - lo)/2;
	                long long x = i+mid;
	                long long y = j+mid;
	                long long sum = prefix[x][y];
	                if(i>0) sum -= prefix[i-1][y];
	                if(j>0) sum -= prefix[x][j-1];
	                if(i > 0 && j >0 ) sum += prefix[i-1][j-1];
	                
	                double avg= double(sum*1.0)/double((mid+1)*(mid+1)*1.0);
	                
	                if(avg >= k*1.0){
	                    maxD = mid;
	                    hi = mid - 1;
	                }else{
	                    lo = mid + 1;
	                }
	            }
	            long long l = 0;
	            if(maxD != -1)
	                l = length - maxD;
	            res += l;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
