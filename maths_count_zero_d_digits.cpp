#include <bits/stdc++.h>
using namespace std;

int find_nos_atleast_one_zero(int d){
	//with d digits
	return 9*(pow(10,d-1) - pow(9,d-1));
}

int main(){
	cout<<find_nos_atleast_one_zero(3)<<endl;
	return 0;
}