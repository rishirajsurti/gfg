#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n",((n)*(n+1)*(2*n+1))/6 );
	}
	return 0;
}