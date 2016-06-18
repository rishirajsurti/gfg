#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int Priority(char c){
	if(c=='+' || c=='-')
		return 1;
	else if(c=='*' || c=='/')
		return 2;
}

void Postfix(string s){
	int l = s.length();
	int i;
	stack<char> c;

	for(i=0; i<l; i++){

		if(s[i]<97 || s[i]>122){
			
			if(c.empty())
				c.push(s[i]);

			else if( Priority(s[i]) < Priority(c.top()) ){
				while(!c.empty() && Priority(s[i]) <= Priority(c.top()) ) {
					cout<<c.top();
					c.pop();
				}
			}
			else
				c.push(s[i]);

			if(c.top()==')'){
				c.pop();
				while(c.top()!='('){
					cout<<c.top();
					c.pop();
				}
				c.pop();
			}
		}
		else
			cout<<s[i];
	
	}
	while(!c.empty()){
		cout<<c.top();
		c.pop();
	}
	cout<<endl;
}

int main(){
	string s;
	cin>>s;
//	cout<<Priority[s[2]]<<endl;
	Postfix(s);
	return 0;
}