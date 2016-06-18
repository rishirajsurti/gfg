#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char *pat, int M, int *lps){
	int len = 0;
	int i;
	lps[0] = 0;
	i = 1;
	while(i<M){
		if(pat[i] == pat[])
	}

}

void KMPSearch(char *pat, char *txt){
	int M = strlen(pat);
	int N = strlen(txt);

	int *lps = new int[M];
	int j = 0;

	computeLPSArray(pat, M, lps);
}
int main(){
	char *txt = "ABABDABACDABABCABAB";
	char *pat = "ABABCABAB";
	KMPSearch(pat, txt);
	return 0;
}