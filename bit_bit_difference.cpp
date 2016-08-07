#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d",&a, &b);
		int ans = 0;
		int xxor = a^b;
		while(xxor){
			if(xxor&1)
				ans++; 
			xxor >>= 1;
		}
		cout<<ans<<endl;
	}
}