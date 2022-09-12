#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long total = (n*(n-1))/2;
	unordered_map<int,long long> score;
	unordered_map<int,long long> goal;
	long long a,b,c,d;
	for(int i=0;i<total;i++){
	    cin>>a>>b>>c>>d;
	    goal[a] += c;
	    goal[b] += d;
	    if(c==d){
	        score[a]++;
	        score[b]++;
	    }
	    else if(c>d){
	        score[a] += 4;
	    }
	    else{
	        score[b] += 4;
	    }
	}
	vector<pair<long long, int>> scoreArr;
	for(auto ele : score ){
	    scoreArr.push_back({ele.second,ele.first});
	}
	sort(scoreArr.begin(), scoreArr.end());
// 	for(auto p : scoreArr){
// 	    cout<<p.second<<" "<<p.first<<endl;
// 	}
	vector<pair<long long, int>> goalArr;
	long long maxScore = scoreArr[n-1].first;
	int person = scoreArr[n-1].second;
	//cout<<person<<" "<<maxScore<<endl;
	auto goalIt = goal.find(person);
	long long g = goalIt->second;
	goalArr.push_back({g,person});
	for(int i=n-2;i>=0;i--){
	    if(scoreArr[i].first == maxScore){
	        person = scoreArr[i].second;
	        goalIt = goal.find(person);
	        g = goalIt->second;
	        goalArr.push_back({g,person});
	    }
	    else{
	        break;
	    }
	}
	
	sort(goalArr.begin(), goalArr.end());
    int res = goalArr.size();
// 	for(auto p : goalArr){
// 	    cout<<p.second<<" * "<<p.first<<endl;
// 	}
	cout<<goalArr[res-1].second<<endl;
	
	return 0;
}
