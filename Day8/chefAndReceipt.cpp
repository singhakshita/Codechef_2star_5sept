#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t,p,d,c;
	vector<int> price = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
	cin>>t;
	while(t--){
	    c=0;
	    cin>>p;
	    for(auto d : price){
	        c += p/d;
	        p = p%d;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
