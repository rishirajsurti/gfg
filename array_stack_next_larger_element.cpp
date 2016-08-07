#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		stack<int> s;
		s.push(a[0]);
		for(int i = 1; i < n; i++){
			if(s.empty()) printf("-1\n");
			else if(a[i] <= s.top()) s.push(a[i]);
			else{
				//a[i] > s.top()
				while(!s.empty() && a[i] > s.top()){
					printf("%d ",a[i] );
					s.pop();
				}
				s.push(a[i]);
			}
		}
	}
	return 0;
}