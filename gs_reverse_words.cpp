#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		string s;
		getline(cin, s);
		istringstream is(s);
		vector<string> a;
		a.assign(istream_iterator<string>(is), istream_iterator<string>());
		reverse(a.begin(), a.end());
		for(int i = 0; i < a.size(); i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}