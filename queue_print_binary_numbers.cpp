#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		for(unsigned long long i = 1; i <= n; i++){
			if(i > 1) printf(" ");

			if(i<2)
				cout<<bitset<1>(i);
			else if(i<4)
				cout<<bitset<2>(i);
			else if(i<8)
				cout<<bitset<3>(i);
			else if(i<16)
				cout<<bitset<4>(i);
			else if(i<32)
				cout<<bitset<5>(i);
			else if(i<64)
				cout<<bitset<6>(i);
			else if(i<128)
				cout<<bitset<7>(i);
			else if(i<256)
				cout<<bitset<8>(i);
			else if(i<512)
				cout<<bitset<9>(i);
		}
		cout<<endl;
	}
	return 0;
}