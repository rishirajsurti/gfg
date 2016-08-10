#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s, p;
		cin>>s;
		cin>>p;
		string ans = "";
		for(int i = 0; i < s.length(); ){
			bool ok = true;
			int j = 0; 
			while(j < p.length() && i+j < s.length() && ok){
				if(s[i+j] != p[j])
					ok = false;
				j++;
			}
			if(j!=p.length()) ok = false;
			if(!ok) ans+=s[i++];
			else{
				ans += 'X';
				i+= p.length();
			}
		}
		for(int i = 0; i < ans.length(); i++){
			if(ans[i]=='X' && ans[i+1]=='X') continue;
			else cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}