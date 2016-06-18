#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct suffix{
	int index;
	char *suff;
};

int main(){
	char txt[] = "banana";
	int n = strlen(txt);
	int *suffixArr = buildSuffixArray(txt, n);
}