#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2){
	int m = s1.length(), n = s2.length();
	int L[m+1][n+1];
	int i,j;
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
	return L[m][n];
}

/*int lcs(string s1, string s2){
	if(s1.length()==0 || s2.length()==0)
		return 0;
	if(s1==s2)
		return s1.length();
	int i,j;
	i = s1.length();
	j = s2.length();

	if(s1[0]==s2[0]){
//		cout<<s1.substr(1,i-1)<<" "<<s2.substr(1,j-1);
		return (1+lcs(s1.substr(1,i-1), s2.substr(1,j-1)));
	}
	else if(s1[i-1]==s2[j-1]){
//		cout<<s1.substr(0,i-1)<<" "<<s2.substr(0,j-1);
		return (1+lcs(s1.substr(0,i-1), s2.substr(0, j-1)));
	}
	else{
//		cout<<s1.substr(0,i-1)<<" "<<s2.substr(0,j-1);
		return max(lcs(s1.substr(0, i-1), s2), lcs(s1, s2.substr(0, j-1)));
	}
}
*/
int main(){
	string s1, s2;
	s1 = "AGGTAB";
	s2 = "GXTXAYB";
	printf("Length of LCS = %d\n", lcs(s1, s2));
}
/*#include <iostream>
#include <string>
using namespace std;

void print_c(int **x,int **b, int row, int col){
	int i,j;
	for(i=1; i<=row; i++){
		for(j=1; j<=col; j++){
			cout<<x[i][j];
			if(b[i][j] == 0)
				cout<<"_ ";
			else if(b[i][j] == 1)
				cout<<"\\ ";
			else 
				cout<<"| ";
		}
		cout<<endl;
	}

}

void print_lcs(int **b, string X, int i, int j){
	if(i==0 || j==0)
		return;

	if(b[i][j] == 1){
		print_lcs(b,X, i-1,j-1);
		cout<<X[i]<<" ";
	}
	else if(b[i][j] == 2){
		print_lcs(b,X, i-1,j);
	}
	else
		print_lcs(b,X, i, j-1);
}

void lcs(string X, string Y){

	int m = X.length();
	int n = Y.length();
	int **c = new int*[m+1];
	int **b = new int*[m+1];
	int i,j;
	for(i=0; i<=m; i++){
		c[i] = new int[n];
		b[i] = new int[m];
	}
	//refer cormen;
	//for b:
	//<- = 0 , up-left = 1, ^ = 2

	//0,1,2..m rows
	//0,1,2..n cols
	i = 0;
	for(j=0; j<=n ; j++)
		c[i][j] = 0;

	j=0;
	for(i=0; i<=m; i++)
		c[i][j] = 0;

	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
			if(X[i] == Y[j]){
				c[i][j] = c[i-1][j-1] + 1;
				b[i][j] = 1;
			}
			else if(c[i-1][j] >= c[i][j-1]){
				c[i][j] = c[i-1][j];
				b[i][j] = 2;
			}
			else{
				c[i][j] = c[i][j-1];
				b[i][j] = 0;
			}
		}
	}
	print_c(c,b, m, n);
	//cout<<"done"<<endl;
	print_lcs(b,X,m,n);
}	

int main(){
	string X="ABCBDAB";
	string Y="BDCABA";
	//cout<<X.length()<<endl<<Y<<endl;
	lcs(X,Y);
	
	return 0;
}*/