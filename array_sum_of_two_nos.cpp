#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a,b;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n1, n2; scanf("%d %d", &n1, &n2);
		a.clear(); b.clear();
		a.assign(n1, 0);
		b.assign(n2, 0);
		for(int i =0 ; i< n1; scanf("%d", &a[i++]));
		for(int i =0 ; i< n2; scanf("%d", &b[i++]));
		
		if(n1 > n2){
			while(b.size() < n1){
				b.insert(b.begin(), 0);
			}
		}
		else if(n1 < n2){
			while(a.size() < n2){
				a.insert(a.begin(), 0);
			}
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		vi c;
		int sum, carry = 0;
		for(int i = 0; i < n1; i++){
			sum = a[i]+b[i] + carry;
			if(sum > 9){
				carry = sum/10;
				sum = sum%10;
				c.push_back(sum);	
			}
			else{
				carry = 0;
				c.push_back(sum);
			}
		}
		if(carry!=0)
			c.push_back(carry);
		carry = 0;
		reverse(c.begin(), c.end());
		for(int i = 0; i < c.size(); i++)
			printf("%d ", c[i]);
		printf("\n");
	}
	return 0;
		
}