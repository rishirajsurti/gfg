#include <bits/stdc++.h>
using namespace std;

int n, d;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &d);
		printf("%d", n/d);
		int quo, rem;
		quo = n/d;
		rem = n % d;
		string dec = "";
		map<int, int> m;
		int seen_before_at;
		int seen_index = 0;
		while(1){
//			printf("here %d %d\n", rem, quo);

			
			rem = rem*10;
			if(rem == 0) break;
			if(m.find(rem) != m.end()) {
				seen_before_at = m[rem];
				break;
			}
			
			m[rem] = seen_index++;

			quo = rem/d;
			rem = rem%d;
			
			dec += '0'+quo;
			//cout<<dec<< endl;
		}
		if(dec == "") printf("\n");
		else if(rem == 0){
			printf(".");
			cout << dec << endl;
		}
		else{
			int i;
			printf(".");
			
			for(i = 0; i < seen_before_at; i++)
				cout << dec[i];
			printf("(" );
			for(; dec[i]; i++) cout << dec[i];
			printf(")\n");
		}
	}
	return 0;
}