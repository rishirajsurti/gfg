#include <bits/stdc++.h>
using namespace std;
vector<int> a;

int ndigits(int n){
	int ans = 0;
	while(n){
		ans++;
		n /= 10;		
	}
	return ans;
}

void solve(){
	int i;
	for(i = 0; i < 10; i++)
		a.push_back(i);

	int count = 9;
	i = 1;
	while(a.size() <= 100000){
		int x = a[i];
		int digit = x%10;
		if(digit > 0){
			a.push_back(x*10+(digit-1));
		}
		if(digit < 9){
			a.push_back(x*10 + (digit+1));
		}
		i++;
	}
}

int main(){
	solve();
	int t; scanf("%d", &t);
	while(t--){
		map<int, vector<int> > m;

		int n; scanf("%d", &n);
		for(int i = 0; a[i] <= n ; i++){
			int ndig = ndigits(a[i]);
			int x = a[i] / pow(10, (ndig-1));
			m[x].push_back(a[i]);
			//printf("%d ", a[i]);
		}
		for(int i = 0; i <= 9; i++){
			for(vector<int>::iterator it = m[i].begin() ; it != m[i].end(); it++){
				printf("%d ",*it );
			}
		}
		printf("\n");
	}
	return 0;
}