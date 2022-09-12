#include<bits/stdc++.h> 
#define ll long long 

using namespace std;

int main(){
    
    int n,q;
    ll nums,x,k;
    cin >> n;
    multiset<pair<ll,ll>> temp;
    for(int i = 0; i < n ; i++ ){
        cin >> nums;
        temp.insert({i + 1, nums});
    }
    cin >> q;
    while(q--){
        cin >> x >>k;
            
            ll dis = 0;
            while(k != 0){
                  auto it = temp.upper_bound({x, 0});
                  
                  if(it == temp.end()){
                      break;
                  }
                  //cout<<it->first<<" "<<it->second<<endl;

                  pair<ll,ll> curr = *it;
                  ll poss = min(k, it->second);
                  dis += poss*(it->first - x);
                  k -= poss;
                  curr.second -= poss;
                  temp.erase(it);
                  if(curr.second != 0) temp.insert(curr);
                        
        }
        cout<<dis<<"\n";

    }


return 0;
}