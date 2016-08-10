#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

bool solve(string str){
	stack<char> s;
	for(int i = 0; str[i]; i++){
		if(str[i]=='(' || str[i] == '[' || str[i] == '{')
			s.push(str[i]);
		else{
			if(str[i]==')'){
				if(s.empty() || s.top()!='(') return false;
				s.pop();
			}
			else if(str[i]==']'){
				if(s.empty() || s.top() != '[') return false;
				s.pop();
			}
			else if(str[i] == '}'){
				if(s.empty() || s.top() != '{') return false;
				s.pop();
			}
		}
	}
	return true;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		if(solve(s))
			printf("balanced\n");
		else
			printf("not balanced\n");
	}
	return 0;
}