#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		sort(a.begin(), a.end());
		for(int i = 1; i < a.size(); i+=2){
			swap(a[i], a[i-1]);
		}

		for(int i = 0; i < a.size(); i++){
			if(i > 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}