#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n, s;
vi a;

bool isSubSetSum(){
	if(s & 1) return false;
	s = s/2;
	bool t[s+1][n+1];

//	(sum, idx);
	for(int i = 0; i <= n; i++)
		t[0][i] = true;

	for(int i = 0; i <= s; i++)
		t[i][0] = false;


	for(int i = 1; i <= s; i++){
		for(int j = 1; j <= n; j++){
			t[i][j] = t[i][j-1];
			if(i >= a[j-1]){
				t[i][j] = t[i][j] || t[i-a[j-1]][j-1];
			}
		}
	}
	return t[s][n];
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		s = 0;	
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			s += a[i];
		}
		if(isSubSetSum())
			printf("YES\n");
		else
			printf("NO\n");		
	}

}

/*#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){

		int n; 
		scanf("%d", &n);
		vi a(n);
		int s =0;
		for(int i =0 ; i < n; i++ ){
			scanf("%d", &a[i]);
			s+= a[i];
		}
		vi aa, ab;
		int sa,sb;
		sa = sb = s/2;
		if(s&1) printf("NO\n");
		else{
			sort(a.begin(), a.end());

			for(int i = n-1; i >= 0; i--){
				if(a[i] <= sa) sa-=a[i], aa.push_back(a[i]);
				else if(a[i] <= sb) sb-=a[i], ab.push_back(a[i]);
			}

			if(sa != sb)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}*/