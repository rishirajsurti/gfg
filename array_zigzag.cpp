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
		/*sort(a.begin(), a.end());
		for(int i =0 ; i<a.size(); i+=2)
			swap(a[i], a[i+1]);*/
		bool flag = true;
		for(int i = 0; i < n-1; i++){
			if(flag){
				//<
				if(a[i]>a[i+1]) swap(a[i], a[i+1]);
			}
			else{
				//>
				if(a[i] < a[i+1]) swap(a[i], a[i+1]);
			}
			flag = !flag;	
		}
		for(int i = 0 ;i < n; i++){
			if(i > 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}