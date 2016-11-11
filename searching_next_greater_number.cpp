#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

string solve(string s){
	int n = s.length();
	int i;
	for(i = n-1; i > 0; i--){
		if(s[i] > s[i-1]) break;
	}

	if(i==0) return "not possible";
	int x = s[i-1]-'0';
	int smallest = i;
	for(int j = i+1; j < n; j++){
		if(s[j]-'0' > x && s[j]-'0' < s[smallest]-'0')
			smallest = j;
	}
	swap(s[smallest], s[i-1]);
	sort(s.begin()+i, s.end());
	return s;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
//		getline(cin, s);
		cin>>s;
		//cout<<"entered: " << s <<endl;
		cout << solve(s) << endl;
	}
	return 0;
}