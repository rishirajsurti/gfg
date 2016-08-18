#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

void solve(int n){
	int m, p;
	p = n;
	m = 0;
	int x = 2;
	while(p){
		if(p&1){
			m = m+x;
		}
		x = x*x;
		
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		int n; scanf("%d", &n);
		
		solve(n);
	}
	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

void toBinary(int n){
	while(n){
		if(n%2==0) a.push_back(0);
		else a.push_back(1);
		n = n/2;
	}
//	reverse(a.begin(), a.end());
}

bool checkPalin(int n){
	toBinary(n);
	int i = 0, j = a.size()-1;
	while(i<j){
		if(a[i]!=a[j]) return false;
		i++; j--;
	}
	return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		int n; scanf("%d", &n);
		
		printf("%d\n", checkPalin(n));
	}
	return 0;
}*/

/*
const int nbits(int n){
	int ans = 0;
	while(n){
		ans++;
		n = n/10;
	}
	return ans;
}

*/
/*bool checkPalin(int n){
	const int b = nbits(n);
	bitset<b> bs(n);

	int i = 0, j = bs.size()-1;
	while(i<=j){
		if(bs[i] != bs[j]) return false;
		i++; j--;
	}
	return true;
}
*/
