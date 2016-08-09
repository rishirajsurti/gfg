#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		bitset<32> bs(n), b;
		for(int i =0; i<bs.size(); i++)
			b[31-i] = bs[i];
		cout<<b.to_ulong()<<endl;
	}
	return 0;
}