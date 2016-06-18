#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2){
	int m = s1.length(), n = s2.length();
	int L[m+1][n+1];
	int i,j;
	string s="";
	for(i=0; i<=m; i++)
		for(j=0; j<=n; j++) L[i][j] = 0;

	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
			if(s1[i-1]==s2[j-1])
				L[i][j] = 1 + L[i-1][j-1];
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}
	
	i=m; j=n;
	while(i>=0 && j>=0){
		if(s1[i]==s2[j]){
			s = s1[i]+s;
			i--; j--;
		} else if(L[i-1][j] > L[i][j-1]){
		//	s = s1[i-1]+s;
			i--;
		} else{
		//	s = s1[i]+s;
			j--;
		}
	}
	cout<<s<<endl;
	return L[m][n];
}

int main(){
	string s1, s2;
	s1 = "AGGTAB";
	s2 = "GXTXAYB";
	printf("Length of LCS = %d\n", lcs(s1, s2));
}