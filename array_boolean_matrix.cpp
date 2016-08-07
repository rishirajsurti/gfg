#include <bits/stdc++.h>
using namespace std;

int a[25][25], b[25][25];
int r,c;
void operate(int I, int J){
	for(int i = 0; i < r; i++)
		b[i][J] = 1;

	for(int j = 0; j < c; j++)
		b[I][j] = 1;
}

int main(){
	
	int t; scanf("%d", &t);
	while(t--){
		memset(a, 0, sizeof a);
		memset(b, 0, sizeof b);	
		
		scanf("%d %d", &r, &c);
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				scanf("%d", &a[i][j]);
				if(a[i][j] == 1){
					operate(i,j);
				}
			}
		}

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				printf("%d ",b[i][j] );
			}
		}
		printf("\n");
	}
	return 0;
}