#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		vector<int> a, b;
		int u;
		for(int i = 0; i < n; i++){
			scanf("%d", &u);
			if(u >= 0) a.push_back(u);
			else b.push_back(u);
		}
		int i,j;
		i = 0; j = 0;
		while(i < a.size() && j < b.size()){
			if(i == j)
				printf("%d ", a[i++]);
			else
				printf("%d ",b[j++] );
		}

		if(i!=a.size())
			printf("%d\n", a[i]);
		else if(j != b.size())
			printf("%d\n", b[j]);
		else
			printf("\n");
	}
	return 0;
}