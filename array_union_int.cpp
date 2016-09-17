#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a, b;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d %d", &n, &m);
		a.resize(n);
		b.resize(m);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		for(int i =0 ; i < m; scanf("%d", &b[i++]));

		int i, j;
		i = 0; j = 0;
		while(i < n && j < m){
			if(a[i] < b[j]) printf("%d ", a[i++]);
			else if(a[i] > b[j]) printf("%d ",b[j++] );
			else printf("%d ", a[i++]), j++;
		}
		while(i < n)
			printf("%d ", a[i++]);
		while(j < m)
			printf("%d ", b[j++]);
		printf("\n");
	}
	return 0;
}