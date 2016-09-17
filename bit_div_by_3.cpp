#include <bits/stdc++.h>
using namespace std;

bool solve(string s){
	
	if(s.length()==1 && s[0]=='1') return 0;
	if(s.length()==1 && s[0]=='0') return 1;
	int odd_count = 0, even_count = 0;
	int start = 0;
	if(s[0]=='-') start = 1;
	int i = s.length()-1;
	while(i>=start){
		if(s[i]=='1') odd_count++;
		i--;
		if(i>=start){
			if(s[i]=='1') even_count++;
		}
		i--;
	}

	return ((abs(odd_count-even_count))%3==0 );

}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		printf("%d\n", solve(s));
	}
	return 0;
}