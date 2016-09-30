#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a,b;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n; scanf("%d %d", &m, &n);
		a.clear(); b.clear();
		a.assign(m, 0), b.assign(n,0);
		for(int i = 0; i < m; scanf("%d", &a[i++]));
		for(int i = 0; i < n; scanf("%d", &b[i++]));
/*
		vi c;
		for(int i = 0; i < n; i++){
			int cnt = count(a.begin(), a.end(), b[i]);
			for(int j = 0; j < cnt; j++) c.push_back(b[i]);
		}
		int p = c.size();
		*/
		map<int, int> mp;
		for(int i = 0; i < m; ++mp[a[i++]]);
		vi c;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < mp[b[i]]; j++)
				c.push_back(b[i]);
			mp.erase(mp.find(b[i]));
		}
		int csize = c.size();
		map<int,int>::iterator it;
		for(it = mp.begin(); it != mp.end(); it++){
			for(int i = 0; i < (int)(it->second); i++)
				c.push_back((int)(it->first));
		}
		sort(c.begin()+csize, c.end());
		for(int i =0 ; i< c.size(); i++)
			printf("%d ",c[i] );
		printf("\n");
	}
	return 0;
}