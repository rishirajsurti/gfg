#include <bits/stdc++.h>
using namespace std;

/*void solve(){
	string s = "abcd";
	s.erase(s.find('b'),1);
	cout << s << endl;
	s.insert(s.begin(), 'b');
	cout << s << endl;
}
*/

/*int solve(string a, string b){
	int ans = 0, i, j;
	for(i = 0; b[i]; i++){
		if(a[i] == b[i]) continue;
		//if(a.find(b[i]) == a.end()) return -1;
		//else a.erase(a.find(b[i]))		
		for(j = i; a[j] && a[j]!=b[i]; j++);
		if(a[j] && j!=i){
			a.erase(j, 1);
			a.insert(a.begin()+i, b[i]);
			ans++;
		}
		else return -1;
	}
	return ans;
}
*/

bool sameChar(string a, string b){
	map<char, int> m;
	for(int i = 0; i < b.length(); ++m[b[i++]]);

	for(int i = 0; i < a.length(); i++){
		if(m.find(a[i])==m.end()) return false;
		--m[a[i]];
		if(m[a[i]] == 0) m.erase(m.find(a[i]));
	} 
	return m.empty();
}

int solve(string a, string b){

	if(a.length()!=b.length() || !sameChar(a,b)) return -1;
	
	int i,j;
	i = a.length()-1;
	j = b.length()-1;
	int cnt = 0;
	for(; j>= 0; j--){
		while(a[i]!=b[j]) i--;
		if(a[i]==b[j]) cnt++;
	}
	return b.length()-cnt;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		string a, b;
		cin>>a;
		cin>>b;
		printf("%d\n", solve(a,b));
	}
	return 0;
}