#include <bits/stdc++.h>
using namespace std;

int solve(string s){
	int ans = 0;
	int n = s.length();
	int i = 0;
	while(i < n-1){
		if(s[i]==s[i+1]) ans++;
		i++;
	}
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		printf("%d\n", solve(s));
	}
	return 0;
}