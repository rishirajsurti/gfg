#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	int i;
	for(i=0; i<10; i++)
		q.push(i);
	cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<endl;
	q.pop();
		cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<endl;
//	cout<<q.back()<<endl;
	return 0;
}