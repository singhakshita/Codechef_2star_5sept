#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    string s;
	    cin>>s;
	    int res = (int)(s[0] - 'a' + 1);
	    for(int i=1;i<s.length();i++){
	        int num = (int)(s[i] - 'a' + 1);
	        res = (res ^ num);
	    }
	    if(res == 0){
	        cout<<-1<<endl;
	    }else{
	        char ans = (char)('a' + res - 1);
	        cout<<ans<<endl;
	    }
	    
	    
	}
	return 0;
}
