#include <bits/stdc++.h>
using namespace std;


string numberToName(int n){

	string col="";
	while(n){
		int rem = n%26;
		if(rem == 0){
			col += "Z";
			n = (n/26)-1;
		}
		else{
			col += (rem-1)+'A';
			n = n/26;
		}
	}

	reverse(col.begin(), col.end());
	//cout << col << endl;
	return col;
}

int nameToNumber(string s){
	int ans = 0;
	for(int i = 0; i < s.length(); i++){
		ans = ans*26 + s[i]-'A'+1;
	}
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		string colname = numberToName(n);
		int colnum = nameToNumber(colname);
		cout << colname << " " << colnum << endl;
	}
	return 0;
}