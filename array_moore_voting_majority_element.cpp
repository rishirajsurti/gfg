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
		int maj_element = 0, count = 1;
		for(int i = 1; i < n; i++){
			if(a[i]==a[maj_element]) count++;
			else count--;
			if(count == 0){
				maj_element = i;
				count = 1;
			}
		}

		count = 0;
		for(int i = 0; i < n; i++){
			if(a[i]==a[maj_element]) count++;
		}
		if(count > n/2) printf("%d\n", a[maj_element]);
		else printf("NO Majority Element\n");
	}
	return 0;
}