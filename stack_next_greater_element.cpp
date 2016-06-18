#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	scanf("%d", &n);
	vector<int> a(n, 0);
	for(int i = 0; i < n; scanf("%d", &a[i++]));
	stack<int> s;
	map<int, int> nge;
	int i;
	for(i=0; i<n; i++){
		if(s.empty())
			s.push(a[i]);
		else{
			while(!s.empty() && a[i] > s.top()){
				nge[s.top()] = a[i];
				s.pop();
			}
			s.push(a[i]);
		}
	}
	while(!s.empty()){
		nge[s.top()] = -1;
		s.pop();
	}

	for(i=0; i<n; i++){
		cout<<a[i]<<" -> "<< nge[a[i]]<<endl;
	}
	return 0;
}