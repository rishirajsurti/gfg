#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n+1), b;
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			if(a[i] == i) b.push_back(i);
		}

		if(b.empty()){
			printf("Not Found\n");
		}
		else{
			for(int i = 0; i < b.size(); i++){
				if(i > 0) printf(" ");
				printf("%d", b[i]);
			}
			printf("\n");
		}
		
	}
	return 0;
}