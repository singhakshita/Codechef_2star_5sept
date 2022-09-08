#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	stack<int> st;
	int a,b;
	for(int i=0;i<q;i++){
	    cin>>a;
	    if(a==1){
	        cin>>b;
	        st.push(b);
	    }else{
	        if(st.size()==0){
	            cout<<"kuchbhi?"<<endl;
	        }else{
	            cout<<st.top()<<endl;
	            st.pop();
	        }
	    }
	}
	return 0;
}
