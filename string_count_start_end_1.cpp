#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		int ans=0, n;
		scanf("%d", &n);
		cin>>s;
		for(int i =0; i < s.length(); i++){
			if(s[i]=='1'){
				for(int j = i+1; j < s.length(); j++){
					if(s[j]=='1') ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}