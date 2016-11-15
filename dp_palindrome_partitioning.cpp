#include <bits/stdc++.h>
using namespace std;

int minPalinOne(string s){
	int n = s.length();
	int C[n][n];
	bool P[n][n];
	int i, j, k, l;
	for(int i = 0; i < n; i++){
		P[i][i] = true;
		C[i][i] = 0;
	}


	for(l = 2; i <= n; l++){
		for(int i = 0; i < n-l+1; i++){
			j = i+l-1;

			if(l == 2)
				P[i][j] = (s[i] == s[j]);
			else
				P[i][j] = (s[i] == s[j]) && (P[i+1][j-1]);

			if(P[i][j]) C[i][j] = 0;
			else{
				C[i][j] = INT_MAX;
				for(k = i; k <= j-1; k++)
					C[i][j] = min(C[i][j], C[i][k] + C[k+1][j] + 1);
			}
		}
	}
	return C[0][n-1];
}


int minPalinTwo(string s){
	int n = s.length();
	int C[n];
	bool P[n][n];

	int i, j, k, l;
	for(int i = 0; i < n; i++)
		P[i][i] = true;

	for(int l = 2; l <= n; l++){
		for(int i = 0; i < n-l+1; i++){
			j = i+l-1;
			if(l==2)
				P[i][j] = (s[i] == s[j]);
			else
				P[i][j] = (s[i]==s[j]) && P[i+1][j-1];
		}
	}

	for(i = 0; i < n; i++){
		if(P[0][i]) C[i] = 0;
		else{
			C[i] = INT_MAX;
			for(j = 0; j < i; j++){
				if(P[j+1][i] && 1+C[j] < C[i])
					C[i] = 1 + C[j];
			}
		}
	}
	return C[n-1];
}


int main(){

	string s = "ababbbabbababa";
	cout << minPalinOne(s) << endl;;

}