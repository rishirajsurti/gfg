#include <bits/stdc++.h>
using namespace std;

int main(){
	string exp;
	cin>>exp;
	stack<char> s;
	bool found = true;
	for(int i = 0; exp[i]; i++){
		bool matched = true;
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			s.push(exp[i]);
		else if(exp[i] == ')'){
			if(s.empty()){
				matched = false;
				found &= matched;
			}
			
		}
	}
}