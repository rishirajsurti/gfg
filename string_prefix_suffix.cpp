#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int solve(string s){
	int n = s.length();
	
	vi b(2*n-1, 0);
	int i, j;

	i = 0; j = -1; b[i] = j;
	while( i < n){
		while(j>=0 && s[i] != s[j]) j = b[j];
		i++; j++;
		b[i] = j;
	}
	return *max_element(b.begin(), b.end());
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;

		printf("%d\n", solve(s));
	}
}