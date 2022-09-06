#include<bits/stdc++.h>
using namespace std;
int nextGreater(vector<int> &res, int num){
    int lo = 0;
    int hi = res.size()-1;
    int idx = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(res[mid] > num){
            idx = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return idx;
}
int main(){
    int t;
    cin>>t;
    while(t-- > 0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        vector<int> res;
        for(int i=0;i<n;i++){
            int idx = nextGreater(res,arr[i]);
            if(idx == -1){
                res.push_back(arr[i]);
            }else{
                res[idx] = arr[i];
            }
        }
        cout<<res.size()<<" ";
        for(int &i : res ){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}
