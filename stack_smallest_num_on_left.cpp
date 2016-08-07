#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n), ans;
		for(int i =0 ; i< n; scanf("%d", &a[i++]));

		stack<int> s;
		for(int i =0 ;i < a.size(); i++){
			while(!s.empty() && s.top() >= a[i]) s.pop();

			if(s.empty()) ans.push_back(-1);
			else ans.push_back(s.top());
			s.push(a[i]);
		}
		for(int i = 0; i< ans.size(); i++){
			if(i > 0)  printf(" ");
			printf("%d", ans[i]);
		}
		printf("\n");
	}
	return 0;
}