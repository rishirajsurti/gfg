#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
map<string, bool> m;

vector< vector<string> > ans;
vector< string > row;

void solve(string s, int id){
	if(id > s.length()) return;
	if(id == s.length()){
		ans.push_back(row);
	}

	for(int k = 1; k <= s.length(); k++){
		int i = id; //i < n-k+1
		int j = i+k-1; // string of length k, from i to j;
		string str = s.substr(i, k);
		if(m.find(str) != m.end()){
			row.push_back(str);
			solve(s, j+1);
			row.pop_back();
		}
	}

}

int main(){

	int t; scanf("%d", &t);
	while(t--){
		m.clear(); ans.clear(); row.clear();
		int n; scanf("%d", &n);
		string word;
		for(int i = 0; i < n; i++){
			cin>>word;
			m[word] = true;
		}

		string s;
		cin>>s;
		solve(s, 0);
		if(ans.empty()) printf("0\n");
		else printf("1\n");
	}
	return 0;
}