#include <iostream>
#include <list>
using namespace std;
int main(){
	list<int> l;
	int i;
	for(i=1; i<11; i++)
		l.push_back(i);

	list<int>::iterator j;
	for(j=l.begin(); j != l.end(); j++)
		cout<<*j<<endl;

//	cout<<l.front()<<endl;
//	l.pop_front();
//	cout<<l.size()<<" "<<l.front()<<" "<<l.back()<<" "<<endl;
//	l.pop_back();
//	cout<<l.size()<<" "<<l.front()<<" "<<l.back()<<" "<<endl;
	return 0;
}