#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int x){
	if(s.empty() || x >= s.top()){
		s.push(x);
		return;
	}
	else{
		int temp = s.top();
		s.pop();
		sortedInsert(s, x);
		s.push(temp);
	}
}

void sortStack(stack<int> &s){
	if(!s.empty()){
		int x = s.top();
		s.pop();
		sortStack(s);
		sortedInsert(s, x);
	}
}

int main(){
	stack<int> s;
	s.push(30);
	s.push(-5);
	s.push(18);
	s.push(14);
	s.push(-3);
	sortStack(s);
	while(!s.empty()){
		printf("%d\n", s.top());
		s.pop();
	}
	return 0;
}