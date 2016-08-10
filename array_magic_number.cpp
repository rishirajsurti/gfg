#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

int magic(int n){
	int pow= 1, ans = 0;
	while(n){
		pow = pow*5;
		if(n&1)
			ans += pow;
		n >>= 1;
	}
	return ans;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		cout<<magic(n)<<endl;
	}
	return 0;
}