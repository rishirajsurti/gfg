#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d\n", &n);
		string s;
		cin>>s;
		int count[26]={0}, foundat[26] = {-1};

		for(int i = 0; i < s.length(); i++){
			++count[s[i]-'a'];
			if(count[s[i]-'a'] == 1){
				foundat[s[i]-'a'] = i;
			}
		}
		int idx = INT_MAX;
		for(int i = 0; i < 26; i++){
			if(count[i]==1 && foundat[i] < idx){
				idx = foundat[i];
			}
		}
		if(idx == INT_MAX) printf("-1\n");
		else printf("%c\n", s[idx]);
	}
	return 0;
}