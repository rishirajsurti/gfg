#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string str; 
		cin>>str;
		stack<int> s;
		s.push(-1);
		
		int ans = 0;
		for(int i = 0; str[i]; i++){
			if(str[i] == '(') s.push(i);
			else{
				s.pop();
				if(!s.empty())
					ans = max(ans, i-s.top());
				else s.push(i);
			}
		}
		printf("%d\n", ans);

	}
	return 0;
}