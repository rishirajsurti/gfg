#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a,b, ans;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		b.clear();
		ans.clear();
		a.assign(n, 0); b.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));

		for(int i = 1; i < n; i++){
			b[i] = a[i]-a[i-1];
		}

		bool buy = false;
		for(int i = 1; i < n; i++){
			if(b[i] >= 0 ){
				
				if(buy == false){
					buy = true;
					ans.push_back(i-1); //buy at i-1
					if(i==n-1){
						//last stock
						ans.push_back(i); //sell at i;
					}
				}
				else if(buy == true){
					//continue the trend.
					//else 
					if(i==n-1){
						//last stock
						buy = false;
						ans.push_back(n-1);
					}
				}
			}
			else if (b[i] < 0){
				if(buy == true){
					buy = false;
					ans.push_back(i-1); //sell at i-1
				}
				else if(buy == false){
					//do nothing
				}
			}

		}
		if(ans.empty()) printf("No Profit\n");
		else{
			for(int i = 0; i < ans.size(); i+=2){
				if(i > 0) printf(" ");
				printf("(%d %d)", ans[i], ans[i+1]);
			}
			printf("\n");
		}

	}
	return 0;
}