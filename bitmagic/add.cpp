#include <iostream>
using namespace std;

int Add(int x, int y){
	if(y==0)
		return x;
	else return Add(x^y, (x&y)<<1);
}

int main(){
	cout<<Add(12,13)<<endl;
}