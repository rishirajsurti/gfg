#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		map<char, int> m;
		for(int i = 0; s[i]; i++)
			++m[s[i]];
		cout<<m.size()<<endl;
	}
	return 0;
}