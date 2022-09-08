#include<bits/stdc++.h>
using namespace std;

int main(){
   
    long long M = 1000000007;
    
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long res = 1;
        stack<pair<int,int>> st;
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 && st.top().first >= arr[i]){
                st.pop();
            }
            if(st.size() != 0){
                res *= (long long)(st.top().second - i + 1);
                res = res%M;
                //cout<<i<<" : "<<st.top().second<<endl;
            }
            st.push({arr[i],i});
        }
        cout<<res<<endl;
    
    return 0;
}