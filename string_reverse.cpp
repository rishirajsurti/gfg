#include <bits/stdc++.h>
using namespace std;


void reverse(char *s){
	if(*s){
		reverse(s+1);
		printf("%c\n", *s);
	}
}

int main(){
	char *s = new char[5];
	scanf("%s", s);
	reverse(s);
	return 0;
}