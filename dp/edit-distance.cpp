#include <bits/stdc++.h>
using namespace std;

#define INF 1e6
//s1 to s2;
int editdist(string s1, string s2){
	int m = s1.length(), n = s2.length();
	int L[m+1][n+1];
	int i,j;
	for(i=0; i<=m; i++)
		L[i][0] = i;
	for(j=0; j<=n; j++)
		L[0][j] = j;

	for(i=1; i<=m; i++){ 
		for(j=1; j<=n; j++){ 
			L[i][j] = INF;
		}
	}
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
			if(s1[i-1]==s2[j-1])
				L[i][j] = L[i-1][j-1];
			else 
				L[i][j] = 1+min(min(L[i-1][j], L[i][j-1]), L[i-1][j-1]);
		}
	}
	return L[m][n];
}

int main(){
	string s1, s2;
	s1 = "sunday";
	s2 = "sunday";
	printf("Cost is %d\n", editdist(s1, s2));
	return 0;
}