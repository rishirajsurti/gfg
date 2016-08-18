#include <bits/stdc++.h>
using namespace std;

string s;

int solve(){
	int i,j;
	int n = s.length();
	vector<int> b(n);
	i = 0; j = -1; b[i] = j;
	while(i < n){

		while(j >= 0 && s[i] != s[j]) j = b[j];
		i++; j++;
		b[i] = j;
	}
	return *max_element(b.begin(), b.end());
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		cin>>s;
		printf("%d\n", solve());
	}
	return 0;
}