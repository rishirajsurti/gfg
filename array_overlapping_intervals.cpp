#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vii a;

bool canMerge(ii x, ii y){
	return x.second >= y.first;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		int n; scanf("%d", &n);
		int s,e;
		for(int i =0 ;i < n ;i++){
			scanf("%d %d", &s, &e);
			a.push_back(ii(s,e));
		}

		sort(a.begin(), a.end());
		int index = 0;
		/*for(int i = 1; i < n; i++){
			if(canMerge(a[index], a[i])){
				a[i].second = max(a[i].second, a[index].second);
			}
		}*/

		for(int i = 0; i < n; i++){
			if(index != 0 && a[i].first <= a[index-1].second){
				while(index != 0 && a[index-1].first <= a[index-1].second){
					a[index-1].first = min(a[index-1].first, a[i].first);
					a[index-1].second = max(a[index-1].second, a[i].second);
					index--;
				}
			}
			else
				a[index] = a[i];
			index++;
		}
		for(int i =0 ; i< index; i++)
			printf("%d %d ", a[i].first, a[i].second);
		printf("\n");
	}
	return 0;
}