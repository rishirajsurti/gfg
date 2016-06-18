#include <iostream>
#include <string>
#include <stack>
using namespace std;

string Reverse(string s){
	int l = s.length();
	stack<char> c;
	int i;	
	for(i=0; i<l; i++)
		c.push(s[i]);

	string revstring;
	string s2;
	while(!c.empty()){
		s2 = c.top();
		revstring.append(s2);
		c.pop();
	}
	return revstring;
}
int main(){
	string s;
	cin>>s;
	cout<<Reverse(s)<<endl;
	return 0;
}