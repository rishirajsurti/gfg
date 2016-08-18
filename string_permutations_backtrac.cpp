#include <bits/stdc++.h>
using namespace std;
char s[5];

void permute(int l, int r){
	if(l==r) cout<<s<<endl;
	else{
		for(int i = l; i <= r; i++){
			swap(s[l],s[i]);
			permute(l+1, r);
			swap(s[l],s[i]);
		}
	}
}

int main(){
	fgets(s, 5, stdin);
	cout<<(int)strlen(s)<<endl;
	permute(0, (int)strlen(s)-1);
	return 0;
}