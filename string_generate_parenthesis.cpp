#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

void solve(int open, int close, string str, int n){
	if(open < 0 || close < 0) return;
	if( close < open) return;

	if(close == 0 && open == 0){
		ans.push_back(str); return;
	}
	solve(open-1, close  , str+"(", n);
	solve(open  , close-1, str+")", n);
}

int main(){
	ans.clear();
	int n = 3;
	string str = "";	
	solve(n, n, str, n);
	for(int i = 0; i < ans.size(); i++)
		cout<<ans[i]<<endl;
	return 0;
}