#include <bits/stdc++.h>
using namespace std;

int solve(string s){
	int ans = 0;
	map<char, int> m;
	map<char, int>::iterator it;
	int cur;
					
	//char-> index at which it is encountered;
	for(int i = 0; s[i]; i++){
		if(m.find(s[i]) == m.end())
			m[s[i]] = i;
		else{
			//encountered before
			cur = 0;
			for(it = m.begin(); it != m.end(); it++){
				if((int)(it->second) > 0) cur++;
			}
			if(cur > ans) ans = cur;

			//found at m[s[i]];
			int idx = m[s[i]];
			for(int j = idx; j >= 0; j--){
				if(m.find(s[j]) != m.end())
					m.erase(m.find(s[j]));
			}

			m[s[i]] = i; //insert s[i];
		}
	}
	cur = 0;
	for(it = m.begin(); it != m.end(); it++){
		if((int)(it->second) > 0) cur++;
	}
	if(cur > ans) ans = cur;

	return ans;
}

int main(){
	string str = "geeksforgeeks";
	int ans = lswr(str);
	cout<<ans<<endl;
	return 0;
}