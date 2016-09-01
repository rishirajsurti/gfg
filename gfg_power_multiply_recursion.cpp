#include <bits/stdc++.h>
using namespace std;

int multiply(int x, int y){
	//x*y;
	if(y == 0) return 0;
	else return x+multiply(x,y-1);
}


int pow(int a, int b){
	if(b)
		return multiply(a, pow(a,b-1));
	else
		return 1;
}


int main(){
	cout<<pow(2, 4)<<endl;
	return 0;
}