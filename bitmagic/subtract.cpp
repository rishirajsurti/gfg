#include <iostream>
using namespace std;

int Sub(int x, int y){
	if(y==0)
		return x;
	else return Sub(x^y, (x&y)<<1);
}

int main(){
	cout<<Sub(1,-12)<<endl;
}