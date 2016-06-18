#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
	stack<int> s;

	int i;
	cout<<s.empty()<<endl;
	for(i=1; i<11; i++)
		s.push(i);
	cout<<s.size()<<" "<<s.top()<<" "<< s.empty()<<endl;
	s.pop();
	cout<<s.size()<<" "<<s.top()<<" "<<endl;
	s.swap(1,5);
	cout<<s.size()<<" "<<s.top()<<<<endl;
	
	return 0;
}