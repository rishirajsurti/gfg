#include <bits/stdc++.h>
using namespace std;

int main(){
	string exp; //expression
	stringstream postfix;
	cin>>exp;
	stack<char> s;
	map<char, int> pr;
	// ^ * / + - 
	pr['+'] = 1;
	pr['-'] = 1;
	pr['*'] = 2;
	pr['/'] = 2;
	pr['^'] = 2;

	int i;
	for(i=0; exp[i]; i++){
		if(exp[i] >= 'a' && exp[i] <='z'){ 
			//can also put condition for A-Z
			postfix<<exp[i];
		}
		else if(exp[i]=='('){
			s.push(exp[i]);
		}
		else if(exp[i] == ')'){
			while(!s.empty() && s.top()!='('){
				postfix<<s.top(); s.pop();
			}
			s.pop();
		}
		else {
			if(s.empty())
				s.push(exp[i]);
			else{
				while(!s.empty() && pr[s.top()] >= pr[exp[i]]){
					postfix<<s.top(); s.pop();
				}
				s.push(exp[i]);
			}
		}
	}
	while(!s.empty()){
		postfix<<s.top(); s.pop();
	}
	cout<<postfix.str()<<endl;
//	cout<<endl;
	return 0;

}