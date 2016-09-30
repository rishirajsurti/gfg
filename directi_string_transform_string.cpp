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

int solve(string a, string b){
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