#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s; 
		cin>>s;
		istringstream is(s);
		vector<string> a;
		string word;
		while(getline(is, word, '.'))
			a.push_back(word);

		reverse(a.begin(), a.end());
		for(int i = 0; i < a.size(); i++){
			if(i > 0) printf(".");
			cout<<a[i];
		}
		printf("\n");
	}
	return 0;
}