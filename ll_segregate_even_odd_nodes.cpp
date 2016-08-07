#include <bits/stdc++.h>
using namespace std;

bool f(int i){
	return i%2==0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		//partition(a.begin(), a.end(), f);
		int i,j;
		i = j = n-1;
		for(j = 0; j<n && j<=i; j++){
			if(a[j] % 2 == 0){
				swap(a[i],a[j]); i--;
			}
		}
		for(int i = 0; i < n; i++){
			if(i > 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}