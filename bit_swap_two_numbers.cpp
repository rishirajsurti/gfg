#include <bits/stdc++.h>
using namespace std;


int main(){
	int x = 10, y = 20;
	x = x+y;
	y = x-y;
	x = x - y;
	printf("%d %d\n", x, y);

	x = x*y;
	y = x/y;
	x = x/y;
	printf("%d %d\n", x, y);

	x = x^y;
	y = x^y;
	x = x^y;
	printf("%d %d\n", x, y);

	return 0;
}