#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--> 0){
        int n;
        cin>>n;
        long long lo = 1;
        long long hi = n;
        long long ans = 0;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            long long sum = (mid * (mid + 1))/2;
            if(sum <= n){
                ans = mid;
                lo = mid + 1;
            }else{
                hi = mid - 1;
            }
        }
        cout<<ans<<endl;
        
    }
	return 0;
}
