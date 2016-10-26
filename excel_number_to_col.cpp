#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		string s = "";
		while(n){
			if(n%26 == 0){
				s += "Z";
				n = (n/26) -1 ;
			}
			else{
				s += ('A' + ((n%26)-1));
				n = n/26;
			}
		}
		reverse(s.begin(), s.end());
		cout<<s<<endl;
	}
	return 0;
}