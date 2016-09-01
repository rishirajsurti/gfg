#include <bits/stdc++.h>
using namespace std;
bool containsZero;
int solve(string s, int n){

	if(n==0 || n == 1) return 1;
	int count = 0;
	if(s[n-1] == '0'){
		if(n==1) containsZero = true;
		else if(s[n-2]>'2' || s[n-2]=='0') containsZero = true;
	}
	if(s[n-1] > '0') 
		count = solve(s, n-1);

	if((s[n-2]<'2') || (s[n-2]=='2' && s[n-1] <'7')) 
		count += solve(s, n-2);
	
	return count; 
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		int n; scanf("%d\n", &n);
		cin>>s;
		containsZero = false;
		int ans = solve(s,n);
		if(s[0]=='0') containsZero = true;
		if(containsZero) printf("0\n");
		else printf("%d\n",ans );
	}
	return 0;
}