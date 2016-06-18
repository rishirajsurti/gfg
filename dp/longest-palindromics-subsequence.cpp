#include <bits/stdc++.h>
using namespace std;
#define INF 1e6

int lps(string s){
	int n = s.length();
	int L[n][n];
	int i,j;
	for(i=0; i<n; i++)
		L[i][i] = 1;

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(s[i]==s[j]) L[i][j] = L[i+1][j-1]
		}
	}
}
/*int lps(string s, int l, int r){
	if(l<0 || l>=s.length() || r<0 || r >= s.length()) return -INF;
	if(l==r) return 1;
	if(s[l]==s[r]) return 2+lps(s,l+1, r-1);
	else return max(lps(s, l+1,r), lps(s, l, r-1));
}
*/
int main(){
	string s;
	s = "GEEKSFORGEEKS";
	printf("LPS length is %d\n", lps(s, 0, s.length()-1));
}