#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- > 0){
	    string s,p;
	    cin>>s>>p;
	    int count[26];
	    fill(count, count+26,0);
	    for(int i=0;i<s.length();i++){
	        int idx = s[i] - 'a';
	        count[idx]++;
	    }
	    
	    bool des = false;
	    bool big = false;
	    for(int i=0;i<p.length();i++){
	        int idx = p[i] - 'a';
	        count[idx]--;
	        if(i>0 && p[i] > p[i-1]){
	            big = true;
	        }
	        if(p[i] < p[i-1] && !big){
	            des = true;
	        }
	    }
	   
	    vector<char> v;
	    string less = "";
	    string equal = "";
	    string greater = ""; 
	    
	    for(int i=0;i<26;i++){
	        char ch = (char)('a' + i);
	        for(int j=0;j<count[i];j++){
	            if(ch > p[0]){
	                greater += ch;
	            }else if(ch == p[0]){
	                equal += ch;
	            }else less += ch;
	        }
	    }
	   
	    string res = "";
	    if(des){
	        res = less + p + equal + greater;
	    }
	    else{
	        res = less + equal + p + greater;
	    }
	    
	    
	    cout<<res<<endl;
	    
	    
	    
	}
	return 0;
}
