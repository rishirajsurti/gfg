#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		do{
			cout<<s<<" ";
		} while(next_permutation(s.begin(), s.end()));
		cout<<endl;
	}
	return 0;
}

/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void Permute(string s, int i);
int main(){
	string s;
	s="abc";
	Permute(s,0);
	return 0;
}
void Permute(string s, int i){
	int n,j;
	char c;
	n=s.length();
	if(i==n){
		cout<<s<<endl;
		return;
	}

	for(j=i; j<n; j++){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		Permute(s,i+1);
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
*/