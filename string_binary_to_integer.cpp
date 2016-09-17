#include <bits/stdc++.h>
using namespace std;

int string_to_integer(string s){
	int n = s.length();
	bitset<32> bs(0);
	for(int i = 0; i < s.length(); i++){
		bs[n-i-1] = s[i]-'0';
	}
	return bs.to_ulong();
}

int main(){
	string str = "110";
	cout<<string_to_integer(str)<<endl;
	return 0;
}