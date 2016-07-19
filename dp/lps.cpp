#include <bits/stdc++.h>
using namespace std;

void lps(char *s){
	int n = (int)strlen(s);

	int t[n][n];

	memset(t, 0, sizeof t);	

	int max_length = -1;
	int start_idx = -1;

	for(int i = 0; i < n; i++)
		t[i][i] = 1;
	//printf("here\n");

	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]){
			t[i][i+1] = 1;
			start_idx = i;
			max_length = 2;
		}
	}

	for(int l = 3; l <= n; l++){
		for(int i = 0; i < n-l+1; i++){
			int j = i+l-1;
			if(s[i] == s[j] && t[i+1][j-1]){
				t[i][j] = 1;
				if(l > max_length){
					start_idx = i;
					max_length = l;
				}
			}
		}
	}
	printf("max_length %d\n", max_length);
	for(int i = 0; i < max_length; i++)
		printf("%c", s[start_idx+i]);
	printf("\n");
}

int main(){
	char s[1024];
	scanf("%s", s);
	lps(s);
	return 0;
}