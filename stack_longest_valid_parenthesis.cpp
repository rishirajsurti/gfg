#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s; cin>>s;
		stack<char> s1;
		stack<int> s2; //index of char found in s1;
		int ans = INT_MIN;

		for(int i = 0; s[i]; i++){
			if(s1.empty()){
				s1.push(s[i]);
				s2.push(i);
			}
			else if(s[i] == '('){
				s1.push(s[i]);
				s2.push(i);	
			}
			else if (s[i] == ')'){
				if(s1.top()=='('){
					s1.pop();
					ans = max(ans, i-s2.top());
					s2.pop();
				}
			}
		}
	}
	return 0;
}