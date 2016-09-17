#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

void solve(int l, int r){
	while(l < r){
		int temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++; r--;
	}
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
    	int n; scanf("%d", &n);
    	
    	a.resize(n);
    	for(int i =0; i < n; scanf("%d", &a[i++]));
    	solve(0, n-1);
    	for(int i = 0; i < n; i++)
    		printf("%d ",a[i] );
    	printf("\n");
    }
	return 0;
}