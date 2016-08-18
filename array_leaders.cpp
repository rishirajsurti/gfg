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
		vi b;
		b.push_back(a[n-1]);
		int max_till_now = a[n-1];
		for(int i = n-2; i>=0; i--){
			if(a[i] > max_till_now){
				max_till_now = a[i];
				b.push_back(a[i]);
			}
		}
		reverse(b.begin(), b.end());
		for(int i = 0 ; i < b.size(); i++)
			printf("%d ",b[i] );
		printf("\n");
	}
	return 0;
}