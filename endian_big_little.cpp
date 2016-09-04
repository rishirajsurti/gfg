
#include <bits/stdc++.h>
using namespace std;


int main(){
	unsigned int i = 1;
	char *c = (char *)&i;
	if(*c) printf("Little endian %c\n", *c);
	else printf("Big endian\n");

	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

void show_mem_rep(char *start, int n){
	int i;
	for(int i = 0; i < n; i++)
		printf("%.2x\n", start[i]);
	printf("\n");
}

int main(){
	int i = 0x01234567;
	show_mem_rep((char *)&i, sizeof(i));
	return 0;
}*/