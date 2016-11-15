#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve(int n, string s){
	reverse(s.begin(), s.end());
	vi a(n,1);
	map<int, bool> used;
	s = s+"0";
	used[1] = true;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'D'){
			++a[i];
			while(used.find(a[i]) != used.end()) ++a[i];
			used[a[i]] = true;
		}
		else if(s[i] == 'I'){
			--a[i];
			while(used.find(a[i]) != used.end()) --a[i];
			used[a[i]] = true;
		}
	}
	int minele = *min_element(a.begin(), a.end());
	minele = abs(minele);
	minele++;
	//reverse(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++)
		cout<<a[i]+minele<< " ";
	cout << endl;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin >> s;
		int n = s.length()+1;
		solve(n, s);
	}
	return 0;
}