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
		/*map<int, int> m;
		stack<int> s;
		for(int i =0 ; i< n; i++){
			if(s.empty()) s.push(a[i]);
			else{
				if(a[i] > s.top()){
					while(!s.empty() && s.top() < a[i]){
						m[s.top()] = a[i];
						s.pop();
					}
					s.push(a[i]);
				}
				else if(a[i] <= s.top())
					s.push(a[i]);
			}
		}

		for(int i = 0; i < a.size(); i++){
			if(i > 0) printf(" ");
			if(m.find(a[i]) == m.end()) printf("-1");
			else printf("%d", m[a[i]]);
		}*/
		for(int i = 0; i<a.size()-1; i++){
			int m = *max_element(a.begin()+i+1, a.end());
			printf("%d ", m);
		}
		printf("-1\n");
	}
	return 0;
}