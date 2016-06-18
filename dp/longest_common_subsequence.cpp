#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max(int a, int b){
	return (a>b ? a:b);
}

int lcs(string s1, string s2){
	
	int n1 = s1.length();
	int n2 = s2.length();
	
	if(n1==0 || n2==0)
		return 0;

	if(s1[n1-1] == s2[n2-1])
		return (1+lcs(s1.substr(0,n1-1), s2.substr(0,n2-1)));
	else
		return max( lcs(s1.substr(0,n1-1),s2), lcs(s1, s2.substr(0,n2-1)));
}

int main(){
	string s1, s2;
	s1 = "RISHIRAJ";
	s2 = "";
	cout<<lcs(s1,s2)<<endl;
	return 0;
}