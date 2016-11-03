#include <bits/stdc++.h>
using namespace std;

int dp[100010][26];

void solve(string s){
	memset(dp, 0, sizeof dp);
	int n = s.length();
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 26; j++){
			if(i > 0) dp[i][j] += dp[i-1][j];
			++dp[i][(s[i]-'a')];
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		solve(s);
		int q; scanf("%d", &q);
		int l, r;
		for(int i = 0; i < q; i++){
			scanf("%d %d", &l, &r);
			--l; --r;
			int ans = 0;
			for(int j = 0; j < 26; j++){
				if(l > 0){
					if(dp[r][j] - dp[l-1][j] > 0) ans++;
				}
				else if(dp[r][j] > 0) ans++;
			}
			printf("%d ",ans );
		}
		printf("\n");
	}
}
/*#include <bits/stdc++.h>
using namespace std;

class SegmentTree{
private:
	vi st;
	string s;
	int n;
	int left(int p){ return p<<1; }
	int right(int p){ return 1 + (p<<1); }
public:
	SegmentTree(string S){
		s = S;
		n = s.length();
		st.assign(4*n, 0);
	}

	void build(int p, int L, int R){
		if(L == R){
			st[p] = 1;
			return;
		}

		map<char, int> m;
		int ans = 0;
		for(int i = L; i <= R; ++m[s[i++]]);

		map<char, int>::iterator it;
		for(it = m.begin(); it != m.end(); it++){
			if(it->second == 1) ans++;
		}

		st[p] = ans;
		build(left(p), L, (L+R)/2);
		build(right(p), 1+(L+R)/2, R);

	}

	void rmq(int p, int L, int R, int )
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		int q; scanf("%d", &q);

	}
}*/