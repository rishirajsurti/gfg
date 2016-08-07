#include <bits/stdc++.h>
using namespace std;
char s[15], ans[30];

void solve(int i, int j, int n){
	if(i == n){
		ans[j] = '\0';
		cout<<"("<<ans<<")";
		return;
	}

	ans[j] = s[i];
	solve(i+1, j+1, n);

	ans[j] = ' ';
	ans[j+1] = s[i];
	solve(i+1, j+2, n);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%s", s);
		ans[0] = s[0];
		int n = strlen(s);
		solve(1,1,n);
		cout<<endl;
	}
	return 0;
}