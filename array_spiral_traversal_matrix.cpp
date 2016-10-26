#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vector<vi> a;
vi ans;

void spiral(int n, int m){
	int n1, n2, m1, m2;
	n1 = 0;
	n2 = n-1;
	m1 = 0;
	m2 = m-1;

	while(n1 <= n2 && m1 <= m2){
		int i;
		for(i = m1; i <= m2; i++){
			ans.push_back(a[n1][i]);
		}
		n1++;
		for(i = n1; i <= n2; i++){
			ans.push_back(a[i][m2]);
		}
		m2--;

		if(n1 < n2){
			for(i = m2; i>= m1; i--){
				ans.push_back(a[n2][i]);
			}
			n2--;
		}
		if(m1 < m2){
			for(i = n2; i>=n1; i--){
				ans.push_back(a[i][m1]);
			}
			m1++;

		}
	}

}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m;
		n = 4; m = 4;
		a.assign(n, vi());
		ans.clear();
		for(int i = 0; i < n; i++){
			a[i].assign(m, 0);
			for(int j = 0; j < m; scanf("%d", &a[i][j++]));
		}
		spiral(n, m);

		for(int i = 0; i < ans.size(); i++){
			printf("%d ", ans[i]);
		}
		printf("\n");
	}
	return 0;
}